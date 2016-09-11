# Test case for a possible bug in av_parser_parse2

(EDIT) BUG CLOSED: it was a documentation issue:
 * [Ticket 5809](https://trac.ffmpeg.org/ticket/5809) in FFmpeg bug tracker
 * Fix in commit 7a8e5ff1fd, visible on
[videolan.org](https://git.videolan.org/?p=ffmpeg.git;a=commitdiff;h=7a8e5ff1fd06c0363ed4bb26cda5262fcd925b74)
and on
[Github mirror](https://github.com/FFmpeg/FFmpeg/commit/7a8e5ff1fd06c0363ed4bb26cda5262fcd925b74)

---

This is a small test case to demonstrate a buffer overflow on the input
buffer of `av_parser_parse2` (at least with the mpegaudio parser).

The function has the following prototype:
```
int av_parser_parse2(AVCodecParserContext * s,
                     AVCodecContext *       avctx,
                     uint8_t **             poutbuf,
                     int *                  poutbuf_size,
                     const uint8_t *        buf,
                     int                    buf_size,
                     int64_t                pts,
                     int64_t                dts,
                     int64_t                pos)
```

On some cases, the `buf_size` parameter is not respected and the
function reads beyond buffer's end.

This test case takes some encoded audio that was dumped from another
application and calls av_parser_parse2 in a loop. Most of the time, the
application behaves just fine, but sometimes it crashes.

When run with Valgrind, I get the following output:
```
$ valgrind ./test
==6028== Memcheck, a memory error detector
==6028== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6028== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright
info
==6028== Command: ./test
==6028==
==6028== Invalid read of size 8
==6028==    at 0x4C326C8: memcpy@@GLIBC_2.14 (in
/usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==6028==    by 0x55CED85: memcpy (string3.h:53)
==6028==    by 0x55CED85: ff_combine_frame (parser.c:298)
==6028==    by 0x55657F8: mpegaudio_parse (mpegaudio_parser.c:111)
==6028==    by 0x55CE9A0: av_parser_parse2 (parser.c:182)
==6028==    by 0x400D0A: main (test.c:67)
==6028==  Address 0x76a2258 is 0 bytes after a block of size 40 alloc'd
==6028==    at 0x4C2FFC6: memalign (in
/usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==6028==    by 0x4C300D1: posix_memalign (in
/usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==6028==    by 0x63016CF: av_malloc (mem.c:97)
==6028==    by 0x400C4D: main (test.c:53)
==6028==
==6028== Invalid read of size 8
==6028==    at 0x4C326D6: memcpy@@GLIBC_2.14 (in
/usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==6028==    by 0x55CED85: memcpy (string3.h:53)
==6028==    by 0x55CED85: ff_combine_frame (parser.c:298)
==6028==    by 0x55657F8: mpegaudio_parse (mpegaudio_parser.c:111)
==6028==    by 0x55CE9A0: av_parser_parse2 (parser.c:182)
==6028==    by 0x400D0A: main (test.c:67)
==6028==  Address 0x76a2f80 is 8 bytes after a block of size 40 alloc'd
==6028==    at 0x4C2FFC6: memalign (in
/usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==6028==    by 0x4C300D1: posix_memalign (in
/usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==6028==    by 0x63016CF: av_malloc (mem.c:97)
==6028==    by 0x400C4D: main (test.c:53)
==6028==
==6028==
==6028== HEAP SUMMARY:
==6028==     in use at exit: 40 bytes in 1 blocks
==6028==   total heap usage: 734 allocs, 733 frees, 67,939 bytes
allocated
==6028==
==6028== LEAK SUMMARY:
==6028==    definitely lost: 0 bytes in 0 blocks
==6028==    indirectly lost: 0 bytes in 0 blocks
==6028==      possibly lost: 0 bytes in 0 blocks
==6028==    still reachable: 40 bytes in 1 blocks
==6028==         suppressed: 0 bytes in 0 blocks
==6028== Rerun with --leak-check=full to see details of leaked memory
==6028==
==6028== For counts of detected and suppressed errors, rerun with: -v
==6028== ERROR SUMMARY: 92 errors from 2 contexts (suppressed: 0 from 0)
```
