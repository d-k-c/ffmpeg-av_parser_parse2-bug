#include <stdlib.h>
#include <stdio.h>

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>

extern const char encoded_audio[];
const int encoded_audio_len;

#define CODEC_ID        AV_CODEC_ID_MP2
#define SAMPLERATE      48000
#define CHANNELS        2
#define BUFFER_SIZE     40

int main(int argc, char *argv[])
{
	AVCodecParserContext *parser_ctx;
	AVCodec *acodec;
	AVCodecContext *codec_ctx;
	int ret = 1;
	int i = 0;

	av_register_all();

	parser_ctx = av_parser_init(CODEC_ID);
	if (!parser_ctx) {
		printf("parser context not found\n");
		return -1;
	}

	acodec = avcodec_find_decoder(CODEC_ID);
	if (!acodec) {
		printf("AVcodec not found\n");
		goto close_avparser;
	}

	codec_ctx = avcodec_alloc_context3(acodec);
	if (!codec_ctx) {
		printf("Failed to allocate codec context\n");
		goto close_avparser;
	}

	codec_ctx->sample_rate = SAMPLERATE;
	codec_ctx->channels = CHANNELS;

	ret = avcodec_open2(codec_ctx, acodec, NULL);
	if (ret < 0) {
		printf("Failed to open avocdec (%d)\n", ret);
		return ret;
	}

	while (i < encoded_audio_len) {
		char *buf = av_malloc(BUFFER_SIZE);
		int buf_size = BUFFER_SIZE;
		AVPacket parsed_pkt;

		if (!buf) {
			goto close_avcodec;
		}

		if ((encoded_audio_len - i) < BUFFER_SIZE)
			buf_size = encoded_audio_len - i;

		av_init_packet(&parsed_pkt);
		memcpy(buf, &encoded_audio[i], buf_size);

		i += av_parser_parse2(parser_ctx, codec_ctx,
				      &parsed_pkt.data, &parsed_pkt.size,
				      buf, buf_size, AV_NOPTS_VALUE, AV_NOPTS_VALUE, 0);

		av_free(buf);
	}

	ret = 0;

close_avcodec:
	avcodec_close(codec_ctx);
	av_free(codec_ctx);
close_avparser:
	av_parser_close(parser_ctx);

	return ret;
}
