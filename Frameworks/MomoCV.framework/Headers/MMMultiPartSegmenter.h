//
//  MMMultiPartSegmenter.h
//  MomoCV
//
//  Created by 杨乃川 on 2020/4/13.
//

//#import <Foundation/Foundation.h>
//#import "MMCVDetectionOptions.h"
//#import <CoreVideo/CoreVideo.h>
//NS_ASSUME_NONNULL_BEGIN
//typedef NS_ENUM(NSUInteger, MMMultiPartSegementType) {
//    MMMultiPartSegementTypeFullHead = 0,
//    MMMultiPartSegementTypeFace = 1,
//    MMMultiPartSegementTypeHair = 2
//};
//
//@class MMFaceFeature;
//
//@interface MMMultiPartSegmentationResult: NSObject <NSCopying>
//
//@property (nonatomic,readonly) NSData *data;
//
//@property (nonatomic,readonly) size_t width;
//
//@property (nonatomic,readonly) size_t height;
//
//@property (nonatomic,readonly) int type;
//
//@end
//
//
//@interface MMMultiPartSegmenter : NSObject
//
//@property (nonatomic,copy,readonly) NSURL *modelURL;
//
//- (instancetype)init NS_UNAVAILABLE;
//
//- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error NS_DESIGNATED_INITIALIZER;
//
//- (NSArray<MMMultiPartSegmentationResult *> *)multiPartsSegmentationResultsForFaceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures inPixelBuffer:(CVPixelBufferRef)pixelBuffer;
//- (NSArray<MMMultiPartSegmentationResult *> *)multiPartsSegmentationResultsForFaceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures inPixelBuffer:(CVPixelBufferRef)pixelBuffer orientation:(MMCVImageOrientation)orientation;
//- (NSArray<MMMultiPartSegmentationResult *> *)multiPartsSegmentationResultsForFaceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures inPixelBuffer:(CVPixelBufferRef)pixelBuffer segementationType:(MMMultiPartSegementType)type orientation:(MMCVImageOrientation)orientation;
//
//
//- (void)reclaimResources;
//
//@end
//
//
//NS_ASSUME_NONNULL_END
