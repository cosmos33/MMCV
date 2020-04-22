//
//  MMSemanticSegmentation.h
//  Pods
//
//  Created by YuAo on 10/06/2017.
//
//

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "MMCVDetectionOptions.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MMImageSegmentationDataFormat) {
    MMImageSegmentationDataFormatR8
};

@interface MMImageSegmentationResult : NSObject <NSCopying>

@property (nonatomic,readonly) NSData *data;

@property (nonatomic,readonly) size_t width;

@property (nonatomic,readonly) size_t height;

@property (nonatomic,readonly) MMImageSegmentationDataFormat format;

@end

@interface MMFaceSegmentationResult : MMImageSegmentationResult

@end


@interface MMSegmenterOption : NSObject <NSCopying>
@property (nonatomic, assign) float imageScale;
@property (nonatomic, assign) MMCVImageOrientation orientation;
@end

@interface MMImageSegmenterOption : MMSegmenterOption <NSCopying>

@end

@interface MMHairSegmenterOption : MMSegmenterOption <NSCopying>

@end


@interface MMImageSegmenter : NSObject

@property (nonatomic,copy,readonly) NSURL *modelURL;

+ (BOOL)validateModelBundle:(NSBundle *)bundle;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error;

- (nullable instancetype)initWithModelURL:(NSURL *)modelURL error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (nullable MMImageSegmentationResult *)segmentationResultForPixelBuffer:(CVPixelBufferRef)pixelBuffer option:(MMImageSegmenterOption *)option;

- (nullable MMImageSegmentationResult *)segmentationResultForPixelBuffer:(CVPixelBufferRef)pixelBuffer orientation:(MMCVImageOrientation)orientation;

- (void)reset;

@end

@interface MMHairSegmenter: NSObject

@property (nonatomic,copy,readonly) NSURL *modelURL;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error;

- (nullable instancetype)initWithModelURL:(NSURL *)modelURL error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (nullable MMImageSegmentationResult *)segmentationResultForPixelBuffer:(CVPixelBufferRef)pixelBuffer option:(MMHairSegmenterOption *)option;

- (nullable MMImageSegmentationResult *)segmentationResultForPixelBuffer:(CVPixelBufferRef)pixelBuffer orientation:(MMCVImageOrientation)orientation;

- (void)reset;

@end

@class MMFaceFeature;
@interface MMFaceSegmenter : NSObject

@property (nonatomic,copy,readonly) NSURL *modelURL;

+ (BOOL)validateModelBundle:(NSBundle *)bundle;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error;

- (nullable instancetype)initWithModelURL:(NSURL *)modelURL error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (nullable MMFaceSegmentationResult *)segmentationResultForPixelBuffer:(CVPixelBufferRef)pixelBuffer
                                                                 option:(MMImageSegmenterOption *)option
                                                            faceFeature:(MMFaceFeature *)faceFeature;

- (nullable MMFaceSegmentationResult *)segmentationResultForPixelBuffer:(CVPixelBufferRef)pixelBuffer
                                                            orientation:(MMCVImageOrientation)orientation
                                                            faceFeature:(MMFaceFeature *)faceFeature;

- (void)reset;

@end

NS_ASSUME_NONNULL_END
