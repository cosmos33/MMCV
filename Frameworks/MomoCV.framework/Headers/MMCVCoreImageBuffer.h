//
//  MMCVPixelBufferFormatUtilities.h
//  Pods
//
//  Created by YuAo on 3/4/17.
//
//

#import <Foundation/Foundation.h>
#import <MomoCVCore/MomoCVCore.h>
#import <CoreVideo/CoreVideo.h>
#import "MMCVDetectionOptions.h"

NS_ASSUME_NONNULL_BEGIN

struct MMCVCoreImageBuffer {
    std::vector<uint8_t> data;
    size_t width;
    size_t height;
    size_t rowBytes;
    mmcv::MMFormat format;
    
    struct YUV {
        uint8_t * _Nullable yChannelBaseAddress = NULL;
        size_t yChannelDataLength;
        
        uint8_t * _Nullable uvChannelBaseAddress = NULL;
        size_t uvChannelDataLength;
    };
    
    struct BGRA {
        uint8_t * _Nullable baseAddress = NULL;
        size_t dataLength;
    };
    
    struct RawAddresses {
        YUV yuv;
        BGRA bgra;
    };
    
    RawAddresses rawAddresses;
};

typedef struct MMCVCoreImageBuffer MMCVCoreImageBuffer;

typedef NS_ENUM(NSUInteger, MMCVCoreImageBufferError) {
    MMCVCoreImageBufferErrorNone,
    MMCVCoreImageBufferErrorUnsupportedInputFormat
};

struct MMCVCoreImageBufferCreationOptions {
    bool donotCopyData;
};

CF_EXPORT MMCVCoreImageBufferError MMCVCoreImageBufferFromCVPixelBuffer(CVPixelBufferRef pixelBuffer, MMCVCoreImageBuffer *outBuffer, MMCVCoreImageBufferCreationOptions options = { .donotCopyData = false } );

CF_EXPORT mmcv::MMFrame MMCVCoreFrameFromImageBuffer(MMCVCoreImageBuffer &buffer) API_DEPRECATED("Use MMCVFrameCreateFromCVPixelBuffer instead.", ios(7.0, 8.0));

#pragma mark - MMCVFrameCreation

typedef NS_ENUM(NSUInteger, MMCVFrameCreationError) {
    MMCVFrameCreationErrorNone,
    MMCVFrameCreationErrorUnsupportedInputFormat
};

CF_EXPORT MMCVFrameCreationError MMCVFrameCreateFromCVPixelBuffer(CVPixelBufferRef pixelBuffer, mmcv::MMFrame *outFrame);

CF_EXPORT MMCVFrameCreationError MMCVFrameCreateFromCGImage(CGImageRef image, mmcv::MMFrame *outFrame);

NS_ASSUME_NONNULL_END
