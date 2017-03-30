#include <libavutil/pixfmt.h>
#include <libavutil/avutil.h>
#include <libavcodec/avcodec.h>
#include "include/log.h"

char *getAVPictureTypeLog(enum AVPictureType type) {
    char *string;
    switch (type) {
        case AV_PICTURE_TYPE_NONE:
            string = "NONE";
            break;
        case AV_PICTURE_TYPE_I:
            string = "I";
            break;
        case AV_PICTURE_TYPE_P:
            string = "P";
            break;
        case AV_PICTURE_TYPE_B:
            string = "B";
            break;
        case AV_PICTURE_TYPE_S:
            string = "S";
            break;
        case AV_PICTURE_TYPE_SI:
            string = "SI";
            break;
        case AV_PICTURE_TYPE_SP:
            string = "SP";
            break;
        case AV_PICTURE_TYPE_BI:
            string = "BI";
            break;
    }
    return string;
}

char *getAVPixelFormatLog(enum AVPixelFormat type) {
    char *string;
    switch (type) {

        case AV_PIX_FMT_NONE :
            string = " AV_PIX_FMT_NONE ";
            break;
        case AV_PIX_FMT_YUV420P :
            string = " AV_PIX_FMT_YUV420P ";
            break;
        case AV_PIX_FMT_YUYV422 :
            string = " AV_PIX_FMT_YUYV422 ";
            break;
        case AV_PIX_FMT_RGB24 :
            string = " AV_PIX_FMT_RGB24 ";
            break;
        case AV_PIX_FMT_BGR24 :
            string = " AV_PIX_FMT_BGR24 ";
            break;
        case AV_PIX_FMT_YUV422P :
            string = " AV_PIX_FMT_YUV422P ";
            break;
        case AV_PIX_FMT_YUV444P :
            string = " AV_PIX_FMT_YUV444P ";
            break;
        case AV_PIX_FMT_YUV410P :
            string = " AV_PIX_FMT_YUV410P ";
            break;
        case AV_PIX_FMT_YUV411P :
            string = " AV_PIX_FMT_YUV411P ";
            break;
        case AV_PIX_FMT_GRAY8 :
            string = " AV_PIX_FMT_GRAY8 ";
            break;
        case AV_PIX_FMT_MONOWHITE :
            string = " AV_PIX_FMT_MONOWHITE ";
            break;
        case AV_PIX_FMT_MONOBLACK :
            string = " AV_PIX_FMT_MONOBLACK ";
            break;
        case AV_PIX_FMT_PAL8 :
            string = " AV_PIX_FMT_PAL8 ";
            break;
        case AV_PIX_FMT_YUVJ420P :
            string = " AV_PIX_FMT_YUVJ420P ";
            break;
        case AV_PIX_FMT_YUVJ422P :
            string = " AV_PIX_FMT_YUVJ422P ";
            break;
        case AV_PIX_FMT_YUVJ444P :
            string = " AV_PIX_FMT_YUVJ444P ";
            break;
        case AV_PIX_FMT_XVMC_MPEG2_MC :
            string = " AV_PIX_FMT_XVMC_MPEG2_MC ";
            break;
        case AV_PIX_FMT_UYVY422 :
            string = " AV_PIX_FMT_UYVY422 ";
            break;
        case AV_PIX_FMT_UYYVYY411 :
            string = " AV_PIX_FMT_UYYVYY411 ";
            break;
        case AV_PIX_FMT_BGR8 :
            string = " AV_PIX_FMT_BGR8 ";
            break;
        case AV_PIX_FMT_BGR4 :
            string = " AV_PIX_FMT_BGR4 ";
            break;
        case AV_PIX_FMT_BGR4_BYTE :
            string = " AV_PIX_FMT_BGR4_BYTE ";
            break;
        case AV_PIX_FMT_RGB8 :
            string = " AV_PIX_FMT_RGB8 ";
            break;
        case AV_PIX_FMT_RGB4 :
            string = " AV_PIX_FMT_RGB4 ";
            break;
        case AV_PIX_FMT_RGB4_BYTE :
            string = " AV_PIX_FMT_RGB4_BYTE ";
            break;
        case AV_PIX_FMT_NV12 :
            string = " AV_PIX_FMT_NV12 ";
            break;
        case AV_PIX_FMT_NV21 :
            string = " AV_PIX_FMT_NV21 ";
            break;
        case AV_PIX_FMT_ARGB :
            string = " AV_PIX_FMT_ARGB ";
            break;
        case AV_PIX_FMT_RGBA :
            string = " AV_PIX_FMT_RGBA ";
            break;
        case AV_PIX_FMT_ABGR :
            string = " AV_PIX_FMT_ABGR ";
            break;
        case AV_PIX_FMT_BGRA :
            string = " AV_PIX_FMT_BGRA ";
            break;
        case AV_PIX_FMT_GRAY16BE :
            string = " AV_PIX_FMT_GRAY16BE ";
            break;
        case AV_PIX_FMT_GRAY16LE :
            string = " AV_PIX_FMT_GRAY16LE ";
            break;
        case AV_PIX_FMT_YUV440P :
            string = " AV_PIX_FMT_YUV440P ";
            break;
        case AV_PIX_FMT_YUVJ440P :
            string = " AV_PIX_FMT_YUVJ440P ";
            break;
        case AV_PIX_FMT_YUVA420P :
            string = " AV_PIX_FMT_YUVA420P ";
            break;
        case AV_PIX_FMT_VDPAU_H264 :
            string = " AV_PIX_FMT_VDPAU_H264 ";
            break;
        case AV_PIX_FMT_VDPAU_MPEG1 :
            string = " AV_PIX_FMT_VDPAU_MPEG1 ";
            break;
        case AV_PIX_FMT_VDPAU_MPEG2 :
            string = " AV_PIX_FMT_VDPAU_MPEG2 ";
            break;
        case AV_PIX_FMT_VDPAU_WMV3 :
            string = " AV_PIX_FMT_VDPAU_WMV3 ";
            break;
        case AV_PIX_FMT_VDPAU_VC1 :
            string = " AV_PIX_FMT_VDPAU_VC1 ";
            break;
        case AV_PIX_FMT_RGB48BE :
            string = " AV_PIX_FMT_RGB48BE ";
            break;
        case AV_PIX_FMT_RGB48LE :
            string = " AV_PIX_FMT_RGB48LE ";
            break;
        case AV_PIX_FMT_RGB565BE :
            string = " AV_PIX_FMT_RGB565BE ";
            break;
        case AV_PIX_FMT_RGB565LE :
            string = " AV_PIX_FMT_RGB565LE ";
            break;
        case AV_PIX_FMT_RGB555BE :
            string = " AV_PIX_FMT_RGB555BE ";
            break;
        case AV_PIX_FMT_RGB555LE :
            string = " AV_PIX_FMT_RGB555LE ";
            break;
        case AV_PIX_FMT_BGR565BE :
            string = " AV_PIX_FMT_BGR565BE ";
            break;
        case AV_PIX_FMT_BGR565LE :
            string = " AV_PIX_FMT_BGR565LE ";
            break;
        case AV_PIX_FMT_BGR555BE :
            string = " AV_PIX_FMT_BGR555BE ";
            break;
        case AV_PIX_FMT_BGR555LE :
            string = " AV_PIX_FMT_BGR555LE ";
            break;
        case AV_PIX_FMT_VAAPI_MOCO :
            string = " AV_PIX_FMT_VAAPI_MOCO ";
            break;
        case AV_PIX_FMT_VAAPI_IDCT :
            string = " AV_PIX_FMT_VAAPI_IDCT ";
            break;
            break;
        case AV_PIX_FMT_VAAPI :
            string = " AV_PIX_FMT_VAAPI ";
            break;
            break;
        case AV_PIX_FMT_YUV420P16LE :
            string = " AV_PIX_FMT_YUV420P16LE ";
            break;
        case AV_PIX_FMT_YUV420P16BE :
            string = " AV_PIX_FMT_YUV420P16BE ";
            break;
        case AV_PIX_FMT_YUV422P16LE :
            string = " AV_PIX_FMT_YUV422P16LE ";
            break;
        case AV_PIX_FMT_YUV422P16BE :
            string = " AV_PIX_FMT_YUV422P16BE ";
            break;
        case AV_PIX_FMT_YUV444P16LE :
            string = " AV_PIX_FMT_YUV444P16LE ";
            break;
        case AV_PIX_FMT_YUV444P16BE :
            string = " AV_PIX_FMT_YUV444P16BE ";
            break;
        case AV_PIX_FMT_VDPAU_MPEG4 :
            string = " AV_PIX_FMT_VDPAU_MPEG4 ";
            break;
        case AV_PIX_FMT_DXVA2_VLD :
            string = " AV_PIX_FMT_DXVA2_VLD ";
            break;
        case AV_PIX_FMT_RGB444LE :
            string = " AV_PIX_FMT_RGB444LE ";
            break;
        case AV_PIX_FMT_RGB444BE :
            string = " AV_PIX_FMT_RGB444BE ";
            break;
        case AV_PIX_FMT_BGR444LE :
            string = " AV_PIX_FMT_BGR444LE ";
            break;
        case AV_PIX_FMT_BGR444BE :
            string = " AV_PIX_FMT_BGR444BE ";
            break;
        case AV_PIX_FMT_YA8 :
            string = " AV_PIX_FMT_YA8 ";
            break;
        case AV_PIX_FMT_BGR48BE :
            string = " AV_PIX_FMT_BGR48BE ";
            break;
        case AV_PIX_FMT_BGR48LE :
            string = " AV_PIX_FMT_BGR48LE ";
            break;
        case AV_PIX_FMT_YUV420P9BE :
            string = " AV_PIX_FMT_YUV420P9BE ";
            break;
        case AV_PIX_FMT_YUV420P9LE :
            string = " AV_PIX_FMT_YUV420P9LE ";
            break;
        case AV_PIX_FMT_YUV420P10BE :
            string = " AV_PIX_FMT_YUV420P10BE ";
            break;
        case AV_PIX_FMT_YUV420P10LE :
            string = " AV_PIX_FMT_YUV420P10LE ";
            break;
        case AV_PIX_FMT_YUV422P10BE :
            string = " AV_PIX_FMT_YUV422P10BE ";
            break;
        case AV_PIX_FMT_YUV422P10LE :
            string = " AV_PIX_FMT_YUV422P10LE ";
            break;
        case AV_PIX_FMT_YUV444P9BE :
            string = " AV_PIX_FMT_YUV444P9BE ";
            break;
        case AV_PIX_FMT_YUV444P9LE :
            string = " AV_PIX_FMT_YUV444P9LE ";
            break;
        case AV_PIX_FMT_YUV444P10BE :
            string = " AV_PIX_FMT_YUV444P10BE ";
            break;
        case AV_PIX_FMT_YUV444P10LE :
            string = " AV_PIX_FMT_YUV444P10LE ";
            break;
        case AV_PIX_FMT_YUV422P9BE :
            string = " AV_PIX_FMT_YUV422P9BE ";
            break;
        case AV_PIX_FMT_YUV422P9LE :
            string = " AV_PIX_FMT_YUV422P9LE ";
            break;
        case AV_PIX_FMT_VDA_VLD :
            string = " AV_PIX_FMT_VDA_VLD ";
            break;
        case AV_PIX_FMT_GBRP :
            string = " AV_PIX_FMT_GBRP ";
            break;
        case AV_PIX_FMT_GBRP9BE :
            string = " AV_PIX_FMT_GBRP9BE ";
            break;
        case AV_PIX_FMT_GBRP9LE :
            string = " AV_PIX_FMT_GBRP9LE ";
            break;
        case AV_PIX_FMT_GBRP10BE :
            string = " AV_PIX_FMT_GBRP10BE ";
            break;
        case AV_PIX_FMT_GBRP10LE :
            string = " AV_PIX_FMT_GBRP10LE ";
            break;
        case AV_PIX_FMT_GBRP16BE :
            string = " AV_PIX_FMT_GBRP16BE ";
            break;
        case AV_PIX_FMT_GBRP16LE :
            string = " AV_PIX_FMT_GBRP16LE ";
            break;
        case AV_PIX_FMT_YUVA422P :
            string = " AV_PIX_FMT_YUVA422P ";
            break;
        case AV_PIX_FMT_YUVA444P :
            string = " AV_PIX_FMT_YUVA444P ";
            break;
        case AV_PIX_FMT_YUVA420P9BE :
            string = " AV_PIX_FMT_YUVA420P9BE ";
            break;
        case AV_PIX_FMT_YUVA420P9LE :
            string = " AV_PIX_FMT_YUVA420P9LE ";
            break;
        case AV_PIX_FMT_YUVA422P9BE :
            string = " AV_PIX_FMT_YUVA422P9BE ";
            break;
        case AV_PIX_FMT_YUVA422P9LE :
            string = " AV_PIX_FMT_YUVA422P9LE ";
            break;
        case AV_PIX_FMT_YUVA444P9BE :
            string = " AV_PIX_FMT_YUVA444P9BE ";
            break;
        case AV_PIX_FMT_YUVA444P9LE :
            string = " AV_PIX_FMT_YUVA444P9LE ";
            break;
        case AV_PIX_FMT_YUVA420P10BE :
            string = " AV_PIX_FMT_YUVA420P10BE ";
            break;
        case AV_PIX_FMT_YUVA420P10LE :
            string = " AV_PIX_FMT_YUVA420P10LE ";
            break;
        case AV_PIX_FMT_YUVA422P10BE :
            string = " AV_PIX_FMT_YUVA422P10BE ";
            break;
        case AV_PIX_FMT_YUVA422P10LE :
            string = " AV_PIX_FMT_YUVA422P10LE ";
            break;
        case AV_PIX_FMT_YUVA444P10BE :
            string = " AV_PIX_FMT_YUVA444P10BE ";
            break;
        case AV_PIX_FMT_YUVA444P10LE :
            string = " AV_PIX_FMT_YUVA444P10LE ";
            break;
        case AV_PIX_FMT_YUVA420P16BE :
            string = " AV_PIX_FMT_YUVA420P16BE ";
            break;
        case AV_PIX_FMT_YUVA420P16LE :
            string = " AV_PIX_FMT_YUVA420P16LE ";
            break;
        case AV_PIX_FMT_YUVA422P16BE :
            string = " AV_PIX_FMT_YUVA422P16BE ";
            break;
        case AV_PIX_FMT_YUVA422P16LE :
            string = " AV_PIX_FMT_YUVA422P16LE ";
            break;
        case AV_PIX_FMT_YUVA444P16BE :
            string = " AV_PIX_FMT_YUVA444P16BE ";
            break;
        case AV_PIX_FMT_YUVA444P16LE :
            string = " AV_PIX_FMT_YUVA444P16LE ";
            break;
        case AV_PIX_FMT_VDPAU :
            string = " AV_PIX_FMT_VDPAU ";
            break;
        case AV_PIX_FMT_XYZ12LE :
            string = " AV_PIX_FMT_XYZ12LE ";
            break;
        case AV_PIX_FMT_XYZ12BE :
            string = " AV_PIX_FMT_XYZ12BE ";
            break;
        case AV_PIX_FMT_NV16 :
            string = " AV_PIX_FMT_NV16 ";
            break;
        case AV_PIX_FMT_NV20LE :
            string = " AV_PIX_FMT_NV20LE ";
            break;
        case AV_PIX_FMT_NV20BE :
            string = " AV_PIX_FMT_NV20BE ";
            break;
        case AV_PIX_FMT_RGBA64BE :
            string = " AV_PIX_FMT_RGBA64BE ";
            break;
        case AV_PIX_FMT_RGBA64LE :
            string = " AV_PIX_FMT_RGBA64LE ";
            break;
        case AV_PIX_FMT_BGRA64BE :
            string = " AV_PIX_FMT_BGRA64BE ";
            break;
        case AV_PIX_FMT_BGRA64LE :
            string = " AV_PIX_FMT_BGRA64LE ";
            break;
        case AV_PIX_FMT_YVYU422 :
            string = " AV_PIX_FMT_YVYU422 ";
            break;
        case AV_PIX_FMT_VDA :
            string = " AV_PIX_FMT_VDA ";
            break;
        case AV_PIX_FMT_YA16BE :
            string = " AV_PIX_FMT_YA16BE ";
            break;
        case AV_PIX_FMT_YA16LE :
            string = " AV_PIX_FMT_YA16LE ";
            break;
        case AV_PIX_FMT_GBRAP :
            string = " AV_PIX_FMT_GBRAP ";
            break;
        case AV_PIX_FMT_GBRAP16BE :
            string = " AV_PIX_FMT_GBRAP16BE ";
            break;
        case AV_PIX_FMT_GBRAP16LE :
            string = " AV_PIX_FMT_GBRAP16LE ";
            break;
        case AV_PIX_FMT_QSV :
            string = " AV_PIX_FMT_QSV ";
            break;
        case AV_PIX_FMT_MMAL :
            string = " AV_PIX_FMT_MMAL ";
            break;
        case AV_PIX_FMT_D3D11VA_VLD :
            string = " AV_PIX_FMT_D3D11VA_VLD ";
            break;
        case AV_PIX_FMT_CUDA :
            string = " AV_PIX_FMT_CUDA ";
            break;
        case AV_PIX_FMT_0RGB :
            string = " AV_PIX_FMT_0RGB ";
            break;
        case AV_PIX_FMT_RGB0 :
            string = " AV_PIX_FMT_RGB0 ";
            break;
        case AV_PIX_FMT_0BGR :
            string = " AV_PIX_FMT_0BGR ";
            break;
        case AV_PIX_FMT_BGR0 :
            string = " AV_PIX_FMT_BGR0 ";
            break;
        case AV_PIX_FMT_YUV420P12BE :
            string = " AV_PIX_FMT_YUV420P12BE ";
            break;
        case AV_PIX_FMT_YUV420P12LE :
            string = " AV_PIX_FMT_YUV420P12LE ";
            break;
        case AV_PIX_FMT_YUV420P14BE :
            string = " AV_PIX_FMT_YUV420P14BE ";
            break;
        case AV_PIX_FMT_YUV420P14LE :
            string = " AV_PIX_FMT_YUV420P14LE ";
            break;
        case AV_PIX_FMT_YUV422P12BE :
            string = " AV_PIX_FMT_YUV422P12BE ";
            break;
        case AV_PIX_FMT_YUV422P12LE :
            string = " AV_PIX_FMT_YUV422P12LE ";
            break;
        case AV_PIX_FMT_YUV422P14BE :
            string = " AV_PIX_FMT_YUV422P14BE ";
            break;
        case AV_PIX_FMT_YUV422P14LE :
            string = " AV_PIX_FMT_YUV422P14LE ";
            break;
        case AV_PIX_FMT_YUV444P12BE :
            string = " AV_PIX_FMT_YUV444P12BE ";
            break;
        case AV_PIX_FMT_YUV444P12LE :
            string = " AV_PIX_FMT_YUV444P12LE ";
            break;
        case AV_PIX_FMT_YUV444P14BE :
            string = " AV_PIX_FMT_YUV444P14BE ";
            break;
        case AV_PIX_FMT_YUV444P14LE :
            string = " AV_PIX_FMT_YUV444P14LE ";
            break;
        case AV_PIX_FMT_GBRP12BE :
            string = " AV_PIX_FMT_GBRP12BE ";
            break;
        case AV_PIX_FMT_GBRP12LE :
            string = " AV_PIX_FMT_GBRP12LE ";
            break;
        case AV_PIX_FMT_GBRP14BE :
            string = " AV_PIX_FMT_GBRP14BE ";
            break;
        case AV_PIX_FMT_GBRP14LE :
            string = " AV_PIX_FMT_GBRP14LE ";
            break;
        case AV_PIX_FMT_YUVJ411P :
            string = " AV_PIX_FMT_YUVJ411P ";
            break;
        case AV_PIX_FMT_BAYER_BGGR8 :
            string = " AV_PIX_FMT_BAYER_BGGR8 ";
            break;
        case AV_PIX_FMT_BAYER_RGGB8 :
            string = " AV_PIX_FMT_BAYER_RGGB8 ";
            break;
        case AV_PIX_FMT_BAYER_GBRG8 :
            string = " AV_PIX_FMT_BAYER_GBRG8 ";
            break;
        case AV_PIX_FMT_BAYER_GRBG8 :
            string = " AV_PIX_FMT_BAYER_GRBG8 ";
            break;
        case AV_PIX_FMT_BAYER_BGGR16LE :
            string = " AV_PIX_FMT_BAYER_BGGR16LE ";
            break;
        case AV_PIX_FMT_BAYER_BGGR16BE :
            string = " AV_PIX_FMT_BAYER_BGGR16BE ";
            break;
        case AV_PIX_FMT_BAYER_RGGB16LE :
            string = " AV_PIX_FMT_BAYER_RGGB16LE ";
            break;
        case AV_PIX_FMT_BAYER_RGGB16BE :
            string = " AV_PIX_FMT_BAYER_RGGB16BE ";
            break;
        case AV_PIX_FMT_BAYER_GBRG16LE :
            string = " AV_PIX_FMT_BAYER_GBRG16LE ";
            break;
        case AV_PIX_FMT_BAYER_GBRG16BE :
            string = " AV_PIX_FMT_BAYER_GBRG16BE ";
            break;
        case AV_PIX_FMT_BAYER_GRBG16LE :
            string = " AV_PIX_FMT_BAYER_GRBG16LE ";
            break;
        case AV_PIX_FMT_BAYER_GRBG16BE :
            string = " AV_PIX_FMT_BAYER_GRBG16BE ";
            break;
        case AV_PIX_FMT_XVMC :
            string = " AV_PIX_FMT_XVMC ";
            break;
        case AV_PIX_FMT_YUV440P10LE :
            string = " AV_PIX_FMT_YUV440P10LE ";
            break;
        case AV_PIX_FMT_YUV440P10BE :
            string = " AV_PIX_FMT_YUV440P10BE ";
            break;
        case AV_PIX_FMT_YUV440P12LE :
            string = " AV_PIX_FMT_YUV440P12LE ";
            break;
        case AV_PIX_FMT_YUV440P12BE :
            string = " AV_PIX_FMT_YUV440P12BE ";
            break;
        case AV_PIX_FMT_AYUV64LE :
            string = " AV_PIX_FMT_AYUV64LE ";
            break;
        case AV_PIX_FMT_AYUV64BE :
            string = " AV_PIX_FMT_AYUV64BE ";
            break;
        case AV_PIX_FMT_VIDEOTOOLBOX :
            string = " AV_PIX_FMT_VIDEOTOOLBOX ";
            break;
        case AV_PIX_FMT_P010LE :
            string = " AV_PIX_FMT_P010LE ";
            break;
        case AV_PIX_FMT_P010BE :
            string = " AV_PIX_FMT_P010BE ";
            break;
        case AV_PIX_FMT_GBRAP12BE :
            string = " AV_PIX_FMT_GBRAP12BE ";
            break;
        case AV_PIX_FMT_GBRAP12LE :
            string = " AV_PIX_FMT_GBRAP12LE ";
            break;
        case AV_PIX_FMT_GBRAP10BE :
            string = " AV_PIX_FMT_GBRAP10BE ";
            break;
        case AV_PIX_FMT_GBRAP10LE :
            string = " AV_PIX_FMT_GBRAP10LE ";
            break;
        case AV_PIX_FMT_NB :
            string = " AV_PIX_FMT_NB ";
            break;
    }
    return string;
}

char *getAVCodecIDLog(enum AVCodecID type) {
    char *string;
    switch (type) {

        case AV_CODEC_ID_NONE :
            string = " AV_CODEC_ID_NONE ";
            break;
        case AV_CODEC_ID_MPEG1VIDEO :
            string = " AV_CODEC_ID_MPEG1VIDEO ";
            break;
        case AV_CODEC_ID_MPEG2VIDEO :
            string = " AV_CODEC_ID_MPEG2VIDEO ";
            break;
        case AV_CODEC_ID_MPEG2VIDEO_XVMC :
            string = " AV_CODEC_ID_MPEG2VIDEO_XVMC ";
            break;
        case AV_CODEC_ID_H261 :
            string = " AV_CODEC_ID_H261 ";
            break;
        case AV_CODEC_ID_H263 :
            string = " AV_CODEC_ID_H263 ";
            break;
        case AV_CODEC_ID_RV10 :
            string = " AV_CODEC_ID_RV10 ";
            break;
        case AV_CODEC_ID_RV20 :
            string = " AV_CODEC_ID_RV20 ";
            break;
        case AV_CODEC_ID_MJPEG :
            string = " AV_CODEC_ID_MJPEG ";
            break;
        case AV_CODEC_ID_MJPEGB :
            string = " AV_CODEC_ID_MJPEGB ";
            break;
        case AV_CODEC_ID_LJPEG :
            string = " AV_CODEC_ID_LJPEG ";
            break;
        case AV_CODEC_ID_SP5X :
            string = " AV_CODEC_ID_SP5X ";
            break;
        case AV_CODEC_ID_JPEGLS :
            string = " AV_CODEC_ID_JPEGLS ";
            break;
        case AV_CODEC_ID_MPEG4 :
            string = " AV_CODEC_ID_MPEG4 ";
            break;
        case AV_CODEC_ID_RAWVIDEO :
            string = " AV_CODEC_ID_RAWVIDEO ";
            break;
        case AV_CODEC_ID_MSMPEG4V1 :
            string = " AV_CODEC_ID_MSMPEG4V1 ";
            break;
        case AV_CODEC_ID_MSMPEG4V2 :
            string = " AV_CODEC_ID_MSMPEG4V2 ";
            break;
        case AV_CODEC_ID_MSMPEG4V3 :
            string = " AV_CODEC_ID_MSMPEG4V3 ";
            break;
        case AV_CODEC_ID_WMV1 :
            string = " AV_CODEC_ID_WMV1 ";
            break;
        case AV_CODEC_ID_WMV2 :
            string = " AV_CODEC_ID_WMV2 ";
            break;
        case AV_CODEC_ID_H263P :
            string = " AV_CODEC_ID_H263P ";
            break;
        case AV_CODEC_ID_H263I :
            string = " AV_CODEC_ID_H263I ";
            break;
        case AV_CODEC_ID_FLV1 :
            string = " AV_CODEC_ID_FLV1 ";
            break;
        case AV_CODEC_ID_SVQ1 :
            string = " AV_CODEC_ID_SVQ1 ";
            break;
        case AV_CODEC_ID_SVQ3 :
            string = " AV_CODEC_ID_SVQ3 ";
            break;
        case AV_CODEC_ID_DVVIDEO :
            string = " AV_CODEC_ID_DVVIDEO ";
            break;
        case AV_CODEC_ID_HUFFYUV :
            string = " AV_CODEC_ID_HUFFYUV ";
            break;
        case AV_CODEC_ID_CYUV :
            string = " AV_CODEC_ID_CYUV ";
            break;
        case AV_CODEC_ID_H264 :
            string = " AV_CODEC_ID_H264 ";
            break;
        case AV_CODEC_ID_INDEO3 :
            string = " AV_CODEC_ID_INDEO3 ";
            break;
        case AV_CODEC_ID_VP3 :
            string = " AV_CODEC_ID_VP3 ";
            break;
        case AV_CODEC_ID_THEORA :
            string = " AV_CODEC_ID_THEORA ";
            break;
        case AV_CODEC_ID_ASV1 :
            string = " AV_CODEC_ID_ASV1 ";
            break;
        case AV_CODEC_ID_ASV2 :
            string = " AV_CODEC_ID_ASV2 ";
            break;
        case AV_CODEC_ID_FFV1 :
            string = " AV_CODEC_ID_FFV1 ";
            break;
        case AV_CODEC_ID_4XM :
            string = " AV_CODEC_ID_4XM ";
            break;
        case AV_CODEC_ID_VCR1 :
            string = " AV_CODEC_ID_VCR1 ";
            break;
        case AV_CODEC_ID_CLJR :
            string = " AV_CODEC_ID_CLJR ";
            break;
        case AV_CODEC_ID_MDEC :
            string = " AV_CODEC_ID_MDEC ";
            break;
        case AV_CODEC_ID_ROQ :
            string = " AV_CODEC_ID_ROQ ";
            break;
        case AV_CODEC_ID_INTERPLAY_VIDEO :
            string = " AV_CODEC_ID_INTERPLAY_VIDEO ";
            break;
        case AV_CODEC_ID_XAN_WC3 :
            string = " AV_CODEC_ID_XAN_WC3 ";
            break;
        case AV_CODEC_ID_XAN_WC4 :
            string = " AV_CODEC_ID_XAN_WC4 ";
            break;
        case AV_CODEC_ID_RPZA :
            string = " AV_CODEC_ID_RPZA ";
            break;
        case AV_CODEC_ID_CINEPAK :
            string = " AV_CODEC_ID_CINEPAK ";
            break;
        case AV_CODEC_ID_WS_VQA :
            string = " AV_CODEC_ID_WS_VQA ";
            break;
        case AV_CODEC_ID_MSRLE :
            string = " AV_CODEC_ID_MSRLE ";
            break;
        case AV_CODEC_ID_MSVIDEO1 :
            string = " AV_CODEC_ID_MSVIDEO1 ";
            break;
        case AV_CODEC_ID_IDCIN :
            string = " AV_CODEC_ID_IDCIN ";
            break;
        case AV_CODEC_ID_8BPS :
            string = " AV_CODEC_ID_8BPS ";
            break;
        case AV_CODEC_ID_SMC :
            string = " AV_CODEC_ID_SMC ";
            break;
        case AV_CODEC_ID_FLIC :
            string = " AV_CODEC_ID_FLIC ";
            break;
        case AV_CODEC_ID_TRUEMOTION1 :
            string = " AV_CODEC_ID_TRUEMOTION1 ";
            break;
        case AV_CODEC_ID_VMDVIDEO :
            string = " AV_CODEC_ID_VMDVIDEO ";
            break;
        case AV_CODEC_ID_MSZH :
            string = " AV_CODEC_ID_MSZH ";
            break;
        case AV_CODEC_ID_ZLIB :
            string = " AV_CODEC_ID_ZLIB ";
            break;
        case AV_CODEC_ID_QTRLE :
            string = " AV_CODEC_ID_QTRLE ";
            break;
        case AV_CODEC_ID_TSCC :
            string = " AV_CODEC_ID_TSCC ";
            break;
        case AV_CODEC_ID_ULTI :
            string = " AV_CODEC_ID_ULTI ";
            break;
        case AV_CODEC_ID_QDRAW :
            string = " AV_CODEC_ID_QDRAW ";
            break;
        case AV_CODEC_ID_VIXL :
            string = " AV_CODEC_ID_VIXL ";
            break;
        case AV_CODEC_ID_QPEG :
            string = " AV_CODEC_ID_QPEG ";
            break;
        case AV_CODEC_ID_PNG :
            string = " AV_CODEC_ID_PNG ";
            break;
        case AV_CODEC_ID_PPM :
            string = " AV_CODEC_ID_PPM ";
            break;
        case AV_CODEC_ID_PBM :
            string = " AV_CODEC_ID_PBM ";
            break;
        case AV_CODEC_ID_PGM :
            string = " AV_CODEC_ID_PGM ";
            break;
        case AV_CODEC_ID_PGMYUV :
            string = " AV_CODEC_ID_PGMYUV ";
            break;
        case AV_CODEC_ID_PAM :
            string = " AV_CODEC_ID_PAM ";
            break;
        case AV_CODEC_ID_FFVHUFF :
            string = " AV_CODEC_ID_FFVHUFF ";
            break;
        case AV_CODEC_ID_RV30 :
            string = " AV_CODEC_ID_RV30 ";
            break;
        case AV_CODEC_ID_RV40 :
            string = " AV_CODEC_ID_RV40 ";
            break;
        case AV_CODEC_ID_VC1 :
            string = " AV_CODEC_ID_VC1 ";
            break;
        case AV_CODEC_ID_WMV3 :
            string = " AV_CODEC_ID_WMV3 ";
            break;
        case AV_CODEC_ID_LOCO :
            string = " AV_CODEC_ID_LOCO ";
            break;
        case AV_CODEC_ID_WNV1 :
            string = " AV_CODEC_ID_WNV1 ";
            break;
        case AV_CODEC_ID_AASC :
            string = " AV_CODEC_ID_AASC ";
            break;
        case AV_CODEC_ID_INDEO2 :
            string = " AV_CODEC_ID_INDEO2 ";
            break;
        case AV_CODEC_ID_FRAPS :
            string = " AV_CODEC_ID_FRAPS ";
            break;
        case AV_CODEC_ID_TRUEMOTION2 :
            string = " AV_CODEC_ID_TRUEMOTION2 ";
            break;
        case AV_CODEC_ID_BMP :
            string = " AV_CODEC_ID_BMP ";
            break;
        case AV_CODEC_ID_CSCD :
            string = " AV_CODEC_ID_CSCD ";
            break;
        case AV_CODEC_ID_MMVIDEO :
            string = " AV_CODEC_ID_MMVIDEO ";
            break;
        case AV_CODEC_ID_ZMBV :
            string = " AV_CODEC_ID_ZMBV ";
            break;
        case AV_CODEC_ID_AVS :
            string = " AV_CODEC_ID_AVS ";
            break;
        case AV_CODEC_ID_SMACKVIDEO :
            string = " AV_CODEC_ID_SMACKVIDEO ";
            break;
        case AV_CODEC_ID_NUV :
            string = " AV_CODEC_ID_NUV ";
            break;
        case AV_CODEC_ID_KMVC :
            string = " AV_CODEC_ID_KMVC ";
            break;
        case AV_CODEC_ID_FLASHSV :
            string = " AV_CODEC_ID_FLASHSV ";
            break;
        case AV_CODEC_ID_CAVS :
            string = " AV_CODEC_ID_CAVS ";
            break;
        case AV_CODEC_ID_JPEG2000 :
            string = " AV_CODEC_ID_JPEG2000 ";
            break;
        case AV_CODEC_ID_VMNC :
            string = " AV_CODEC_ID_VMNC ";
            break;
        case AV_CODEC_ID_VP5 :
            string = " AV_CODEC_ID_VP5 ";
            break;
        case AV_CODEC_ID_VP6 :
            string = " AV_CODEC_ID_VP6 ";
            break;
        case AV_CODEC_ID_VP6F :
            string = " AV_CODEC_ID_VP6F ";
            break;
        case AV_CODEC_ID_TARGA :
            string = " AV_CODEC_ID_TARGA ";
            break;
        case AV_CODEC_ID_DSICINVIDEO :
            string = " AV_CODEC_ID_DSICINVIDEO ";
            break;
        case AV_CODEC_ID_TIERTEXSEQVIDEO :
            string = " AV_CODEC_ID_TIERTEXSEQVIDEO ";
            break;
        case AV_CODEC_ID_TIFF :
            string = " AV_CODEC_ID_TIFF ";
            break;
        case AV_CODEC_ID_GIF :
            string = " AV_CODEC_ID_GIF ";
            break;
        case AV_CODEC_ID_DXA :
            string = " AV_CODEC_ID_DXA ";
            break;
        case AV_CODEC_ID_DNXHD :
            string = " AV_CODEC_ID_DNXHD ";
            break;
        case AV_CODEC_ID_THP :
            string = " AV_CODEC_ID_THP ";
            break;
        case AV_CODEC_ID_SGI :
            string = " AV_CODEC_ID_SGI ";
            break;
        case AV_CODEC_ID_C93 :
            string = " AV_CODEC_ID_C93 ";
            break;
        case AV_CODEC_ID_BETHSOFTVID :
            string = " AV_CODEC_ID_BETHSOFTVID ";
            break;
        case AV_CODEC_ID_PTX :
            string = " AV_CODEC_ID_PTX ";
            break;
        case AV_CODEC_ID_TXD :
            string = " AV_CODEC_ID_TXD ";
            break;
        case AV_CODEC_ID_VP6A :
            string = " AV_CODEC_ID_VP6A ";
            break;
        case AV_CODEC_ID_AMV :
            string = " AV_CODEC_ID_AMV ";
            break;
        case AV_CODEC_ID_VB :
            string = " AV_CODEC_ID_VB ";
            break;
        case AV_CODEC_ID_PCX :
            string = " AV_CODEC_ID_PCX ";
            break;
        case AV_CODEC_ID_SUNRAST :
            string = " AV_CODEC_ID_SUNRAST ";
            break;
        case AV_CODEC_ID_INDEO4 :
            string = " AV_CODEC_ID_INDEO4 ";
            break;
        case AV_CODEC_ID_INDEO5 :
            string = " AV_CODEC_ID_INDEO5 ";
            break;
        case AV_CODEC_ID_MIMIC :
            string = " AV_CODEC_ID_MIMIC ";
            break;
        case AV_CODEC_ID_RL2 :
            string = " AV_CODEC_ID_RL2 ";
            break;
        case AV_CODEC_ID_ESCAPE124 :
            string = " AV_CODEC_ID_ESCAPE124 ";
            break;
        case AV_CODEC_ID_DIRAC :
            string = " AV_CODEC_ID_DIRAC ";
            break;
        case AV_CODEC_ID_BFI :
            string = " AV_CODEC_ID_BFI ";
            break;
        case AV_CODEC_ID_CMV :
            string = " AV_CODEC_ID_CMV ";
            break;
        case AV_CODEC_ID_MOTIONPIXELS :
            string = " AV_CODEC_ID_MOTIONPIXELS ";
            break;
        case AV_CODEC_ID_TGV :
            string = " AV_CODEC_ID_TGV ";
            break;
        case AV_CODEC_ID_TGQ :
            string = " AV_CODEC_ID_TGQ ";
            break;
        case AV_CODEC_ID_TQI :
            string = " AV_CODEC_ID_TQI ";
            break;
        case AV_CODEC_ID_AURA :
            string = " AV_CODEC_ID_AURA ";
            break;
        case AV_CODEC_ID_AURA2 :
            string = " AV_CODEC_ID_AURA2 ";
            break;
        case AV_CODEC_ID_V210X :
            string = " AV_CODEC_ID_V210X ";
            break;
        case AV_CODEC_ID_TMV :
            string = " AV_CODEC_ID_TMV ";
            break;
        case AV_CODEC_ID_V210 :
            string = " AV_CODEC_ID_V210 ";
            break;
        case AV_CODEC_ID_DPX :
            string = " AV_CODEC_ID_DPX ";
            break;
        case AV_CODEC_ID_MAD :
            string = " AV_CODEC_ID_MAD ";
            break;
        case AV_CODEC_ID_FRWU :
            string = " AV_CODEC_ID_FRWU ";
            break;
        case AV_CODEC_ID_FLASHSV2 :
            string = " AV_CODEC_ID_FLASHSV2 ";
            break;
        case AV_CODEC_ID_CDGRAPHICS :
            string = " AV_CODEC_ID_CDGRAPHICS ";
            break;
        case AV_CODEC_ID_R210 :
            string = " AV_CODEC_ID_R210 ";
            break;
        case AV_CODEC_ID_ANM :
            string = " AV_CODEC_ID_ANM ";
            break;
        case AV_CODEC_ID_BINKVIDEO :
            string = " AV_CODEC_ID_BINKVIDEO ";
            break;
        case AV_CODEC_ID_IFF_ILBM :
            string = " AV_CODEC_ID_IFF_ILBM ";
            break;
        case AV_CODEC_ID_KGV1 :
            string = " AV_CODEC_ID_KGV1 ";
            break;
        case AV_CODEC_ID_YOP :
            string = " AV_CODEC_ID_YOP ";
            break;
        case AV_CODEC_ID_VP8 :
            string = " AV_CODEC_ID_VP8 ";
            break;
        case AV_CODEC_ID_PICTOR :
            string = " AV_CODEC_ID_PICTOR ";
            break;
        case AV_CODEC_ID_ANSI :
            string = " AV_CODEC_ID_ANSI ";
            break;
        case AV_CODEC_ID_A64_MULTI :
            string = " AV_CODEC_ID_A64_MULTI ";
            break;
        case AV_CODEC_ID_A64_MULTI5 :
            string = " AV_CODEC_ID_A64_MULTI5 ";
            break;
        case AV_CODEC_ID_R10K :
            string = " AV_CODEC_ID_R10K ";
            break;
        case AV_CODEC_ID_MXPEG :
            string = " AV_CODEC_ID_MXPEG ";
            break;
        case AV_CODEC_ID_LAGARITH :
            string = " AV_CODEC_ID_LAGARITH ";
            break;
        case AV_CODEC_ID_PRORES :
            string = " AV_CODEC_ID_PRORES ";
            break;
        case AV_CODEC_ID_JV :
            string = " AV_CODEC_ID_JV ";
            break;
        case AV_CODEC_ID_DFA :
            string = " AV_CODEC_ID_DFA ";
            break;
        case AV_CODEC_ID_WMV3IMAGE :
            string = " AV_CODEC_ID_WMV3IMAGE ";
            break;
        case AV_CODEC_ID_VC1IMAGE :
            string = " AV_CODEC_ID_VC1IMAGE ";
            break;
        case AV_CODEC_ID_UTVIDEO :
            string = " AV_CODEC_ID_UTVIDEO ";
            break;
        case AV_CODEC_ID_BMV_VIDEO :
            string = " AV_CODEC_ID_BMV_VIDEO ";
            break;
        case AV_CODEC_ID_VBLE :
            string = " AV_CODEC_ID_VBLE ";
            break;
        case AV_CODEC_ID_DXTORY :
            string = " AV_CODEC_ID_DXTORY ";
            break;
        case AV_CODEC_ID_V410 :
            string = " AV_CODEC_ID_V410 ";
            break;
        case AV_CODEC_ID_XWD :
            string = " AV_CODEC_ID_XWD ";
            break;
        case AV_CODEC_ID_CDXL :
            string = " AV_CODEC_ID_CDXL ";
            break;
        case AV_CODEC_ID_XBM :
            string = " AV_CODEC_ID_XBM ";
            break;
        case AV_CODEC_ID_ZEROCODEC :
            string = " AV_CODEC_ID_ZEROCODEC ";
            break;
        case AV_CODEC_ID_MSS1 :
            string = " AV_CODEC_ID_MSS1 ";
            break;
        case AV_CODEC_ID_MSA1 :
            string = " AV_CODEC_ID_MSA1 ";
            break;
        case AV_CODEC_ID_TSCC2 :
            string = " AV_CODEC_ID_TSCC2 ";
            break;
        case AV_CODEC_ID_MTS2 :
            string = " AV_CODEC_ID_MTS2 ";
            break;
        case AV_CODEC_ID_CLLC :
            string = " AV_CODEC_ID_CLLC ";
            break;
        case AV_CODEC_ID_MSS2 :
            string = " AV_CODEC_ID_MSS2 ";
            break;
        case AV_CODEC_ID_VP9 :
            string = " AV_CODEC_ID_VP9 ";
            break;
        case AV_CODEC_ID_AIC :
            string = " AV_CODEC_ID_AIC ";
            break;
        case AV_CODEC_ID_ESCAPE130 :
            string = " AV_CODEC_ID_ESCAPE130 ";
            break;
        case AV_CODEC_ID_G2M :
            string = " AV_CODEC_ID_G2M ";
            break;
        case AV_CODEC_ID_WEBP :
            string = " AV_CODEC_ID_WEBP ";
            break;
        case AV_CODEC_ID_HNM4_VIDEO :
            string = " AV_CODEC_ID_HNM4_VIDEO ";
            break;
        case AV_CODEC_ID_H265 :
            string = " AV_CODEC_ID_H265 ";
            break;
        case AV_CODEC_ID_FIC :
            string = " AV_CODEC_ID_FIC ";
            break;
        case AV_CODEC_ID_ALIAS_PIX :
            string = " AV_CODEC_ID_ALIAS_PIX ";
            break;
        case AV_CODEC_ID_BRENDER_PIX :
            string = " AV_CODEC_ID_BRENDER_PIX ";
            break;
        case AV_CODEC_ID_PAF_VIDEO :
            string = " AV_CODEC_ID_PAF_VIDEO ";
            break;
        case AV_CODEC_ID_EXR :
            string = " AV_CODEC_ID_EXR ";
            break;
        case AV_CODEC_ID_VP7 :
            string = " AV_CODEC_ID_VP7 ";
            break;
        case AV_CODEC_ID_SANM :
            string = " AV_CODEC_ID_SANM ";
            break;
        case AV_CODEC_ID_SGIRLE :
            string = " AV_CODEC_ID_SGIRLE ";
            break;
        case AV_CODEC_ID_MVC1 :
            string = " AV_CODEC_ID_MVC1 ";
            break;
        case AV_CODEC_ID_MVC2 :
            string = " AV_CODEC_ID_MVC2 ";
            break;
        case AV_CODEC_ID_HQX :
            string = " AV_CODEC_ID_HQX ";
            break;
        case AV_CODEC_ID_TDSC :
            string = " AV_CODEC_ID_TDSC ";
            break;
        case AV_CODEC_ID_HQ_HQA :
            string = " AV_CODEC_ID_HQ_HQA ";
            break;
        case AV_CODEC_ID_HAP :
            string = " AV_CODEC_ID_HAP ";
            break;
        case AV_CODEC_ID_DDS :
            string = " AV_CODEC_ID_DDS ";
            break;
        case AV_CODEC_ID_DXV :
            string = " AV_CODEC_ID_DXV ";
            break;
        case AV_CODEC_ID_SCREENPRESSO :
            string = " AV_CODEC_ID_SCREENPRESSO ";
            break;
        case AV_CODEC_ID_RSCC :
            string = " AV_CODEC_ID_RSCC ";
            break;
        case AV_CODEC_ID_Y41P :
            string = " AV_CODEC_ID_Y41P ";
            break;
        case AV_CODEC_ID_AVRP :
            string = " AV_CODEC_ID_AVRP ";
            break;
        case AV_CODEC_ID_012V :
            string = " AV_CODEC_ID_012V ";
            break;
        case AV_CODEC_ID_AVUI :
            string = " AV_CODEC_ID_AVUI ";
            break;
        case AV_CODEC_ID_AYUV :
            string = " AV_CODEC_ID_AYUV ";
            break;
        case AV_CODEC_ID_TARGA_Y216 :
            string = " AV_CODEC_ID_TARGA_Y216 ";
            break;
        case AV_CODEC_ID_V308 :
            string = " AV_CODEC_ID_V308 ";
            break;
        case AV_CODEC_ID_V408 :
            string = " AV_CODEC_ID_V408 ";
            break;
        case AV_CODEC_ID_YUV4 :
            string = " AV_CODEC_ID_YUV4 ";
            break;
        case AV_CODEC_ID_AVRN :
            string = " AV_CODEC_ID_AVRN ";
            break;
        case AV_CODEC_ID_CPIA :
            string = " AV_CODEC_ID_CPIA ";
            break;
        case AV_CODEC_ID_XFACE :
            string = " AV_CODEC_ID_XFACE ";
            break;
        case AV_CODEC_ID_SNOW :
            string = " AV_CODEC_ID_SNOW ";
            break;
        case AV_CODEC_ID_SMVJPEG :
            string = " AV_CODEC_ID_SMVJPEG ";
            break;
        case AV_CODEC_ID_APNG :
            string = " AV_CODEC_ID_APNG ";
            break;
        case AV_CODEC_ID_DAALA :
            string = " AV_CODEC_ID_DAALA ";
            break;
        case AV_CODEC_ID_CFHD :
            string = " AV_CODEC_ID_CFHD ";
            break;
        case AV_CODEC_ID_TRUEMOTION2RT :
            string = " AV_CODEC_ID_TRUEMOTION2RT ";
            break;
        case AV_CODEC_ID_M101 :
            string = " AV_CODEC_ID_M101 ";
            break;
        case AV_CODEC_ID_MAGICYUV :
            string = " AV_CODEC_ID_MAGICYUV ";
            break;
        case AV_CODEC_ID_SHEERVIDEO :
            string = " AV_CODEC_ID_SHEERVIDEO ";
            break;
        case AV_CODEC_ID_YLC :
            string = " AV_CODEC_ID_YLC ";
            break;
        case AV_CODEC_ID_FIRST_AUDIO :
            string = " AV_CODEC_ID_FIRST_AUDIO ";
            break;
        case AV_CODEC_ID_PCM_S16BE :
            string = " AV_CODEC_ID_PCM_S16BE ";
            break;
        case AV_CODEC_ID_PCM_U16LE :
            string = " AV_CODEC_ID_PCM_U16LE ";
            break;
        case AV_CODEC_ID_PCM_U16BE :
            string = " AV_CODEC_ID_PCM_U16BE ";
            break;
        case AV_CODEC_ID_PCM_S8 :
            string = " AV_CODEC_ID_PCM_S8 ";
            break;
        case AV_CODEC_ID_PCM_U8 :
            string = " AV_CODEC_ID_PCM_U8 ";
            break;
        case AV_CODEC_ID_PCM_MULAW :
            string = " AV_CODEC_ID_PCM_MULAW ";
            break;
        case AV_CODEC_ID_PCM_ALAW :
            string = " AV_CODEC_ID_PCM_ALAW ";
            break;
        case AV_CODEC_ID_PCM_S32LE :
            string = " AV_CODEC_ID_PCM_S32LE ";
            break;
        case AV_CODEC_ID_PCM_S32BE :
            string = " AV_CODEC_ID_PCM_S32BE ";
            break;
        case AV_CODEC_ID_PCM_U32LE :
            string = " AV_CODEC_ID_PCM_U32LE ";
            break;
        case AV_CODEC_ID_PCM_U32BE :
            string = " AV_CODEC_ID_PCM_U32BE ";
            break;
        case AV_CODEC_ID_PCM_S24LE :
            string = " AV_CODEC_ID_PCM_S24LE ";
            break;
        case AV_CODEC_ID_PCM_S24BE :
            string = " AV_CODEC_ID_PCM_S24BE ";
            break;
        case AV_CODEC_ID_PCM_U24LE :
            string = " AV_CODEC_ID_PCM_U24LE ";
            break;
        case AV_CODEC_ID_PCM_U24BE :
            string = " AV_CODEC_ID_PCM_U24BE ";
            break;
        case AV_CODEC_ID_PCM_S24DAUD :
            string = " AV_CODEC_ID_PCM_S24DAUD ";
            break;
        case AV_CODEC_ID_PCM_ZORK :
            string = " AV_CODEC_ID_PCM_ZORK ";
            break;
        case AV_CODEC_ID_PCM_S16LE_PLANAR :
            string = " AV_CODEC_ID_PCM_S16LE_PLANAR ";
            break;
        case AV_CODEC_ID_PCM_DVD :
            string = " AV_CODEC_ID_PCM_DVD ";
            break;
        case AV_CODEC_ID_PCM_F32BE :
            string = " AV_CODEC_ID_PCM_F32BE ";
            break;
        case AV_CODEC_ID_PCM_F32LE :
            string = " AV_CODEC_ID_PCM_F32LE ";
            break;
        case AV_CODEC_ID_PCM_F64BE :
            string = " AV_CODEC_ID_PCM_F64BE ";
            break;
        case AV_CODEC_ID_PCM_F64LE :
            string = " AV_CODEC_ID_PCM_F64LE ";
            break;
        case AV_CODEC_ID_PCM_BLURAY :
            string = " AV_CODEC_ID_PCM_BLURAY ";
            break;
        case AV_CODEC_ID_PCM_LXF :
            string = " AV_CODEC_ID_PCM_LXF ";
            break;
        case AV_CODEC_ID_S302M :
            string = " AV_CODEC_ID_S302M ";
            break;
        case AV_CODEC_ID_PCM_S8_PLANAR :
            string = " AV_CODEC_ID_PCM_S8_PLANAR ";
            break;
        case AV_CODEC_ID_PCM_S24LE_PLANAR :
            string = " AV_CODEC_ID_PCM_S24LE_PLANAR ";
            break;
        case AV_CODEC_ID_PCM_S32LE_PLANAR :
            string = " AV_CODEC_ID_PCM_S32LE_PLANAR ";
            break;
        case AV_CODEC_ID_PCM_S16BE_PLANAR :
            string = " AV_CODEC_ID_PCM_S16BE_PLANAR ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_QT :
            string = " AV_CODEC_ID_ADPCM_IMA_QT ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_WAV :
            string = " AV_CODEC_ID_ADPCM_IMA_WAV ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_DK3 :
            string = " AV_CODEC_ID_ADPCM_IMA_DK3 ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_DK4 :
            string = " AV_CODEC_ID_ADPCM_IMA_DK4 ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_WS :
            string = " AV_CODEC_ID_ADPCM_IMA_WS ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_SMJPEG :
            string = " AV_CODEC_ID_ADPCM_IMA_SMJPEG ";
            break;
        case AV_CODEC_ID_ADPCM_MS :
            string = " AV_CODEC_ID_ADPCM_MS ";
            break;
        case AV_CODEC_ID_ADPCM_4XM :
            string = " AV_CODEC_ID_ADPCM_4XM ";
            break;
        case AV_CODEC_ID_ADPCM_XA :
            string = " AV_CODEC_ID_ADPCM_XA ";
            break;
        case AV_CODEC_ID_ADPCM_ADX :
            string = " AV_CODEC_ID_ADPCM_ADX ";
            break;
        case AV_CODEC_ID_ADPCM_EA :
            string = " AV_CODEC_ID_ADPCM_EA ";
            break;
        case AV_CODEC_ID_ADPCM_G726 :
            string = " AV_CODEC_ID_ADPCM_G726 ";
            break;
        case AV_CODEC_ID_ADPCM_CT :
            string = " AV_CODEC_ID_ADPCM_CT ";
            break;
        case AV_CODEC_ID_ADPCM_SWF :
            string = " AV_CODEC_ID_ADPCM_SWF ";
            break;
        case AV_CODEC_ID_ADPCM_YAMAHA :
            string = " AV_CODEC_ID_ADPCM_YAMAHA ";
            break;
        case AV_CODEC_ID_ADPCM_SBPRO_4 :
            string = " AV_CODEC_ID_ADPCM_SBPRO_4 ";
            break;
        case AV_CODEC_ID_ADPCM_SBPRO_3 :
            string = " AV_CODEC_ID_ADPCM_SBPRO_3 ";
            break;
        case AV_CODEC_ID_ADPCM_SBPRO_2 :
            string = " AV_CODEC_ID_ADPCM_SBPRO_2 ";
            break;
        case AV_CODEC_ID_ADPCM_THP :
            string = " AV_CODEC_ID_ADPCM_THP ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_AMV :
            string = " AV_CODEC_ID_ADPCM_IMA_AMV ";
            break;
        case AV_CODEC_ID_ADPCM_EA_R1 :
            string = " AV_CODEC_ID_ADPCM_EA_R1 ";
            break;
        case AV_CODEC_ID_ADPCM_EA_R3 :
            string = " AV_CODEC_ID_ADPCM_EA_R3 ";
            break;
        case AV_CODEC_ID_ADPCM_EA_R2 :
            string = " AV_CODEC_ID_ADPCM_EA_R2 ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_EA_SEAD :
            string = " AV_CODEC_ID_ADPCM_IMA_EA_SEAD ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_EA_EACS :
            string = " AV_CODEC_ID_ADPCM_IMA_EA_EACS ";
            break;
        case AV_CODEC_ID_ADPCM_EA_XAS :
            string = " AV_CODEC_ID_ADPCM_EA_XAS ";
            break;
        case AV_CODEC_ID_ADPCM_EA_MAXIS_XA :
            string = " AV_CODEC_ID_ADPCM_EA_MAXIS_XA ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_ISS :
            string = " AV_CODEC_ID_ADPCM_IMA_ISS ";
            break;
        case AV_CODEC_ID_ADPCM_G722 :
            string = " AV_CODEC_ID_ADPCM_G722 ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_APC :
            string = " AV_CODEC_ID_ADPCM_IMA_APC ";
            break;
        case AV_CODEC_ID_ADPCM_VIMA :
            string = " AV_CODEC_ID_ADPCM_VIMA ";
            break;
        case AV_CODEC_ID_ADPCM_AFC :
            string = " AV_CODEC_ID_ADPCM_AFC ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_OKI :
            string = " AV_CODEC_ID_ADPCM_IMA_OKI ";
            break;
        case AV_CODEC_ID_ADPCM_DTK :
            string = " AV_CODEC_ID_ADPCM_DTK ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_RAD :
            string = " AV_CODEC_ID_ADPCM_IMA_RAD ";
            break;
        case AV_CODEC_ID_ADPCM_G726LE :
            string = " AV_CODEC_ID_ADPCM_G726LE ";
            break;
        case AV_CODEC_ID_ADPCM_THP_LE :
            string = " AV_CODEC_ID_ADPCM_THP_LE ";
            break;
        case AV_CODEC_ID_ADPCM_PSX :
            string = " AV_CODEC_ID_ADPCM_PSX ";
            break;
        case AV_CODEC_ID_ADPCM_AICA :
            string = " AV_CODEC_ID_ADPCM_AICA ";
            break;
        case AV_CODEC_ID_ADPCM_IMA_DAT4 :
            string = " AV_CODEC_ID_ADPCM_IMA_DAT4 ";
            break;
        case AV_CODEC_ID_ADPCM_MTAF :
            string = " AV_CODEC_ID_ADPCM_MTAF ";
            break;
        case AV_CODEC_ID_AMR_NB :
            string = " AV_CODEC_ID_AMR_NB ";
            break;
        case AV_CODEC_ID_AMR_WB :
            string = " AV_CODEC_ID_AMR_WB ";
            break;
        case AV_CODEC_ID_RA_144 :
            string = " AV_CODEC_ID_RA_144 ";
            break;
        case AV_CODEC_ID_RA_288 :
            string = " AV_CODEC_ID_RA_288 ";
            break;
        case AV_CODEC_ID_ROQ_DPCM :
            string = " AV_CODEC_ID_ROQ_DPCM ";
            break;
        case AV_CODEC_ID_INTERPLAY_DPCM :
            string = " AV_CODEC_ID_INTERPLAY_DPCM ";
            break;
        case AV_CODEC_ID_XAN_DPCM :
            string = " AV_CODEC_ID_XAN_DPCM ";
            break;
        case AV_CODEC_ID_SOL_DPCM :
            string = " AV_CODEC_ID_SOL_DPCM ";
            break;
        case AV_CODEC_ID_SDX2_DPCM :
            string = " AV_CODEC_ID_SDX2_DPCM ";
            break;
        case AV_CODEC_ID_MP2 :
            string = " AV_CODEC_ID_MP2 ";
            break;
        case AV_CODEC_ID_MP3 :
            string = " AV_CODEC_ID_MP3 ";
            break;
        case AV_CODEC_ID_AAC :
            string = " AV_CODEC_ID_AAC ";
            break;
        case AV_CODEC_ID_AC3 :
            string = " AV_CODEC_ID_AC3 ";
            break;
        case AV_CODEC_ID_DTS :
            string = " AV_CODEC_ID_DTS ";
            break;
        case AV_CODEC_ID_VORBIS :
            string = " AV_CODEC_ID_VORBIS ";
            break;
        case AV_CODEC_ID_DVAUDIO :
            string = " AV_CODEC_ID_DVAUDIO ";
            break;
        case AV_CODEC_ID_WMAV1 :
            string = " AV_CODEC_ID_WMAV1 ";
            break;
        case AV_CODEC_ID_WMAV2 :
            string = " AV_CODEC_ID_WMAV2 ";
            break;
        case AV_CODEC_ID_MACE3 :
            string = " AV_CODEC_ID_MACE3 ";
            break;
        case AV_CODEC_ID_MACE6 :
            string = " AV_CODEC_ID_MACE6 ";
            break;
        case AV_CODEC_ID_VMDAUDIO :
            string = " AV_CODEC_ID_VMDAUDIO ";
            break;
        case AV_CODEC_ID_FLAC :
            string = " AV_CODEC_ID_FLAC ";
            break;
        case AV_CODEC_ID_MP3ADU :
            string = " AV_CODEC_ID_MP3ADU ";
            break;
        case AV_CODEC_ID_MP3ON4 :
            string = " AV_CODEC_ID_MP3ON4 ";
            break;
        case AV_CODEC_ID_SHORTEN :
            string = " AV_CODEC_ID_SHORTEN ";
            break;
        case AV_CODEC_ID_ALAC :
            string = " AV_CODEC_ID_ALAC ";
            break;
        case AV_CODEC_ID_WESTWOOD_SND1 :
            string = " AV_CODEC_ID_WESTWOOD_SND1 ";
            break;
        case AV_CODEC_ID_GSM :
            string = " AV_CODEC_ID_GSM ";
            break;
        case AV_CODEC_ID_QDM2 :
            string = " AV_CODEC_ID_QDM2 ";
            break;
        case AV_CODEC_ID_COOK :
            string = " AV_CODEC_ID_COOK ";
            break;
        case AV_CODEC_ID_TRUESPEECH :
            string = " AV_CODEC_ID_TRUESPEECH ";
            break;
        case AV_CODEC_ID_TTA :
            string = " AV_CODEC_ID_TTA ";
            break;
        case AV_CODEC_ID_SMACKAUDIO :
            string = " AV_CODEC_ID_SMACKAUDIO ";
            break;
        case AV_CODEC_ID_QCELP :
            string = " AV_CODEC_ID_QCELP ";
            break;
        case AV_CODEC_ID_WAVPACK :
            string = " AV_CODEC_ID_WAVPACK ";
            break;
        case AV_CODEC_ID_DSICINAUDIO :
            string = " AV_CODEC_ID_DSICINAUDIO ";
            break;
        case AV_CODEC_ID_IMC :
            string = " AV_CODEC_ID_IMC ";
            break;
        case AV_CODEC_ID_MUSEPACK7 :
            string = " AV_CODEC_ID_MUSEPACK7 ";
            break;
        case AV_CODEC_ID_MLP :
            string = " AV_CODEC_ID_MLP ";
            break;
        case AV_CODEC_ID_GSM_MS :
            string = " AV_CODEC_ID_GSM_MS ";
            break;
        case AV_CODEC_ID_ATRAC3 :
            string = " AV_CODEC_ID_ATRAC3 ";
            break;
        case AV_CODEC_ID_VOXWARE :
            string = " AV_CODEC_ID_VOXWARE ";
            break;
        case AV_CODEC_ID_APE :
            string = " AV_CODEC_ID_APE ";
            break;
        case AV_CODEC_ID_NELLYMOSER :
            string = " AV_CODEC_ID_NELLYMOSER ";
            break;
        case AV_CODEC_ID_MUSEPACK8 :
            string = " AV_CODEC_ID_MUSEPACK8 ";
            break;
        case AV_CODEC_ID_SPEEX :
            string = " AV_CODEC_ID_SPEEX ";
            break;
        case AV_CODEC_ID_WMAVOICE :
            string = " AV_CODEC_ID_WMAVOICE ";
            break;
        case AV_CODEC_ID_WMAPRO :
            string = " AV_CODEC_ID_WMAPRO ";
            break;
        case AV_CODEC_ID_WMALOSSLESS :
            string = " AV_CODEC_ID_WMALOSSLESS ";
            break;
        case AV_CODEC_ID_ATRAC3P :
            string = " AV_CODEC_ID_ATRAC3P ";
            break;
        case AV_CODEC_ID_EAC3 :
            string = " AV_CODEC_ID_EAC3 ";
            break;
        case AV_CODEC_ID_SIPR :
            string = " AV_CODEC_ID_SIPR ";
            break;
        case AV_CODEC_ID_MP1 :
            string = " AV_CODEC_ID_MP1 ";
            break;
        case AV_CODEC_ID_TWINVQ :
            string = " AV_CODEC_ID_TWINVQ ";
            break;
        case AV_CODEC_ID_TRUEHD :
            string = " AV_CODEC_ID_TRUEHD ";
            break;
        case AV_CODEC_ID_MP4ALS :
            string = " AV_CODEC_ID_MP4ALS ";
            break;
        case AV_CODEC_ID_ATRAC1 :
            string = " AV_CODEC_ID_ATRAC1 ";
            break;
        case AV_CODEC_ID_BINKAUDIO_RDFT :
            string = " AV_CODEC_ID_BINKAUDIO_RDFT ";
            break;
        case AV_CODEC_ID_BINKAUDIO_DCT :
            string = " AV_CODEC_ID_BINKAUDIO_DCT ";
            break;
        case AV_CODEC_ID_AAC_LATM :
            string = " AV_CODEC_ID_AAC_LATM ";
            break;
        case AV_CODEC_ID_QDMC :
            string = " AV_CODEC_ID_QDMC ";
            break;
        case AV_CODEC_ID_CELT :
            string = " AV_CODEC_ID_CELT ";
            break;
        case AV_CODEC_ID_G723_1 :
            string = " AV_CODEC_ID_G723_1 ";
            break;
        case AV_CODEC_ID_G729 :
            string = " AV_CODEC_ID_G729 ";
            break;
        case AV_CODEC_ID_8SVX_EXP :
            string = " AV_CODEC_ID_8SVX_EXP ";
            break;
        case AV_CODEC_ID_8SVX_FIB :
            string = " AV_CODEC_ID_8SVX_FIB ";
            break;
        case AV_CODEC_ID_BMV_AUDIO :
            string = " AV_CODEC_ID_BMV_AUDIO ";
            break;
        case AV_CODEC_ID_RALF :
            string = " AV_CODEC_ID_RALF ";
            break;
        case AV_CODEC_ID_IAC :
            string = " AV_CODEC_ID_IAC ";
            break;
        case AV_CODEC_ID_ILBC :
            string = " AV_CODEC_ID_ILBC ";
            break;
        case AV_CODEC_ID_OPUS :
            string = " AV_CODEC_ID_OPUS ";
            break;
        case AV_CODEC_ID_COMFORT_NOISE :
            string = " AV_CODEC_ID_COMFORT_NOISE ";
            break;
        case AV_CODEC_ID_TAK :
            string = " AV_CODEC_ID_TAK ";
            break;
        case AV_CODEC_ID_METASOUND :
            string = " AV_CODEC_ID_METASOUND ";
            break;
        case AV_CODEC_ID_PAF_AUDIO :
            string = " AV_CODEC_ID_PAF_AUDIO ";
            break;
        case AV_CODEC_ID_ON2AVC :
            string = " AV_CODEC_ID_ON2AVC ";
            break;
        case AV_CODEC_ID_DSS_SP :
            string = " AV_CODEC_ID_DSS_SP ";
            break;
        case AV_CODEC_ID_FFWAVESYNTH :
            string = " AV_CODEC_ID_FFWAVESYNTH ";
            break;
        case AV_CODEC_ID_SONIC :
            string = " AV_CODEC_ID_SONIC ";
            break;
        case AV_CODEC_ID_SONIC_LS :
            string = " AV_CODEC_ID_SONIC_LS ";
            break;
        case AV_CODEC_ID_EVRC :
            string = " AV_CODEC_ID_EVRC ";
            break;
        case AV_CODEC_ID_SMV :
            string = " AV_CODEC_ID_SMV ";
            break;
        case AV_CODEC_ID_DSD_LSBF :
            string = " AV_CODEC_ID_DSD_LSBF ";
            break;
        case AV_CODEC_ID_DSD_MSBF :
            string = " AV_CODEC_ID_DSD_MSBF ";
            break;
        case AV_CODEC_ID_DSD_LSBF_PLANAR :
            string = " AV_CODEC_ID_DSD_LSBF_PLANAR ";
            break;
        case AV_CODEC_ID_DSD_MSBF_PLANAR :
            string = " AV_CODEC_ID_DSD_MSBF_PLANAR ";
            break;
        case AV_CODEC_ID_4GV :
            string = " AV_CODEC_ID_4GV ";
            break;
        case AV_CODEC_ID_INTERPLAY_ACM :
            string = " AV_CODEC_ID_INTERPLAY_ACM ";
            break;
        case AV_CODEC_ID_XMA1 :
            string = " AV_CODEC_ID_XMA1 ";
            break;
        case AV_CODEC_ID_XMA2 :
            string = " AV_CODEC_ID_XMA2 ";
            break;
        case AV_CODEC_ID_DST :
            string = " AV_CODEC_ID_DST ";
            break;
        case AV_CODEC_ID_DVD_SUBTITLE :
            string = " AV_CODEC_ID_DVD_SUBTITLE ";
            break;
        case AV_CODEC_ID_DVB_SUBTITLE :
            string = " AV_CODEC_ID_DVB_SUBTITLE ";
            break;
        case AV_CODEC_ID_TEXT :
            string = " AV_CODEC_ID_TEXT ";
            break;
        case AV_CODEC_ID_XSUB :
            string = " AV_CODEC_ID_XSUB ";
            break;
        case AV_CODEC_ID_SSA :
            string = " AV_CODEC_ID_SSA ";
            break;
        case AV_CODEC_ID_MOV_TEXT :
            string = " AV_CODEC_ID_MOV_TEXT ";
            break;
        case AV_CODEC_ID_HDMV_PGS_SUBTITLE :
            string = " AV_CODEC_ID_HDMV_PGS_SUBTITLE ";
            break;
        case AV_CODEC_ID_DVB_TELETEXT :
            string = " AV_CODEC_ID_DVB_TELETEXT ";
            break;
        case AV_CODEC_ID_SRT :
            string = " AV_CODEC_ID_SRT ";
            break;
        case AV_CODEC_ID_MICRODVD :
            string = " AV_CODEC_ID_MICRODVD ";
            break;
        case AV_CODEC_ID_EIA_608 :
            string = " AV_CODEC_ID_EIA_608 ";
            break;
        case AV_CODEC_ID_JACOSUB :
            string = " AV_CODEC_ID_JACOSUB ";
            break;
        case AV_CODEC_ID_SAMI :
            string = " AV_CODEC_ID_SAMI ";
            break;
        case AV_CODEC_ID_REALTEXT :
            string = " AV_CODEC_ID_REALTEXT ";
            break;
        case AV_CODEC_ID_STL :
            string = " AV_CODEC_ID_STL ";
            break;
        case AV_CODEC_ID_SUBVIEWER1 :
            string = " AV_CODEC_ID_SUBVIEWER1 ";
            break;
        case AV_CODEC_ID_SUBVIEWER :
            string = " AV_CODEC_ID_SUBVIEWER ";
            break;
        case AV_CODEC_ID_SUBRIP :
            string = " AV_CODEC_ID_SUBRIP ";
            break;
        case AV_CODEC_ID_WEBVTT :
            string = " AV_CODEC_ID_WEBVTT ";
            break;
        case AV_CODEC_ID_MPL2 :
            string = " AV_CODEC_ID_MPL2 ";
            break;
        case AV_CODEC_ID_VPLAYER :
            string = " AV_CODEC_ID_VPLAYER ";
            break;
        case AV_CODEC_ID_PJS :
            string = " AV_CODEC_ID_PJS ";
            break;
        case AV_CODEC_ID_ASS :
            string = " AV_CODEC_ID_ASS ";
            break;
        case AV_CODEC_ID_HDMV_TEXT_SUBTITLE :
            string = " AV_CODEC_ID_HDMV_TEXT_SUBTITLE ";
            break;
        case AV_CODEC_ID_TTF :
            string = " AV_CODEC_ID_TTF ";
            break;
        case AV_CODEC_ID_BINTEXT :
            string = " AV_CODEC_ID_BINTEXT ";
            break;
        case AV_CODEC_ID_XBIN :
            string = " AV_CODEC_ID_XBIN ";
            break;
        case AV_CODEC_ID_IDF :
            string = " AV_CODEC_ID_IDF ";
            break;
        case AV_CODEC_ID_OTF :
            string = " AV_CODEC_ID_OTF ";
            break;
        case AV_CODEC_ID_SMPTE_KLV :
            string = " AV_CODEC_ID_SMPTE_KLV ";
            break;
        case AV_CODEC_ID_DVD_NAV :
            string = " AV_CODEC_ID_DVD_NAV ";
            break;
        case AV_CODEC_ID_TIMED_ID3 :
            string = " AV_CODEC_ID_TIMED_ID3 ";
            break;
        case AV_CODEC_ID_BIN_DATA :
            string = " AV_CODEC_ID_BIN_DATA ";
            break;
        case AV_CODEC_ID_PROBE :
            string = " AV_CODEC_ID_PROBE ";
            break;
        case AV_CODEC_ID_MPEG2TS :
            string = " AV_CODEC_ID_MPEG2TS ";
            break;
        case AV_CODEC_ID_MPEG4SYSTEMS :
            string = " AV_CODEC_ID_MPEG4SYSTEMS ";
            break;
        case AV_CODEC_ID_FFMETADATA :
            string = " AV_CODEC_ID_FFMETADATA ";
            break;
        case AV_CODEC_ID_WRAPPED_AVFRAME :
            string = " AV_CODEC_ID_WRAPPED_AVFRAME ";
            break;
    }
    return string;
}
