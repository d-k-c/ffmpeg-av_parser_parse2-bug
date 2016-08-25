
FFMPEG_ROOT = /home/driegel/projects/ffmpeg

CFLAGS =  -I$(FFMPEG_ROOT)/libavformat/ -g
LDFLAGS =  -L$(FFMPEG_ROOT)/libavformat/ -lavformat
LDFLAGS += -L$(FFMPEG_ROOT)/libavcodec/ -lavcodec
LDFLAGS += -L$(FFMPEG_ROOT)/libavutil/ -lavutil
LDFLAGS += -L$(FFMPEG_ROOT)/libswresample/ -lswresample

all: test

objects = encoded_audio.o test.o

test: $(objects)
	gcc -o $@ $^ $(LDFLAGS)
	
%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY:
clean:
	rm -f test *.o
