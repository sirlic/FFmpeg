#include <libavutil/avutil.h>
#include <libavcodec/avcodec.h>

char* getAVPictureTypeLog(enum AVPictureType type);
char* getAVCodecIDLog(enum AVCodecID type);
char *getAVPixelFormatLog(enum AVPixelFormat type);