//
//  MMFaceAnimojiProcessor.h
//  MomoCV
//
//  Created by momo783 on 2019/3/6.
//

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "MMCVDetectionOptions.h"

NS_ASSUME_NONNULL_BEGIN

@class MMFaceFeature;

@interface MMFaceAnimojiProcessor : NSObject

@property (nonatomic,copy,readonly) NSURL *modelURL;

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error;

- (nullable instancetype)initWithModelURL:(nullable NSURL*)modelURL error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (BOOL)processAnimojiInPixelBuffer:(CVPixelBufferRef)pixelBuffer faceFeatures:(NSArray<MMFaceFeature*> *)faceFeature orientation:(MMCVImageOrientation)orientation;

@end

NS_ASSUME_NONNULL_END
