//
//  MMOpenCVUtilities.h
//  MomoCV
//
//  Created by Yu Ao on 27/03/2018.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@class MMFaceFeature;

NS_ASSUME_NONNULL_BEGIN

@interface MMOpenCVUtilities : NSObject

@end


@interface MMSkinDefectsRemovingOptions: NSObject

@property (nonatomic) int adaptiveThresholdBlockSize;

@property (nonatomic) double adaptiveThresholdC;

@property (nonatomic) double inpaintRadius;

@property (nonatomic) float amount;

@end

@interface MMSkinDefectsRemovingUtility: NSObject

+ (CGImageRef)imageByRemovingSkinDefectsInImage:(CGImageRef)inputImage guideImage:(CGImageRef)guideImage options:(MMSkinDefectsRemovingOptions *)options CF_RETURNS_NOT_RETAINED;

@end

NS_ASSUME_NONNULL_END

#import <simd/simd.h>

@class MMHairSeparationColor;
@class MMImageSegmentationResult;

NS_ASSUME_NONNULL_BEGIN


@interface MMHairSeparationColor: NSObject <NSCopying>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@property (nonatomic, readonly) NSUInteger red;
@property (nonatomic, readonly) NSUInteger green;
@property (nonatomic, readonly) NSUInteger blue;

@property (nonatomic, readonly) simd_int3 simdColor;

@property (nonatomic, copy, readonly, class) NSArray<MMHairSeparationColor *> *colors;

- (instancetype)initWithRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue;
@end

@interface MMHairSeparationResult: NSObject

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@property (nonatomic, copy, readonly) NSData *data; //BGRA8

@property (nonatomic, readonly) size_t width;

@property (nonatomic, readonly) size_t height;

@property (nonatomic, copy, readonly) NSArray<MMHairSeparationColor *> *colors;

@end

@interface MMHairSeparator: NSObject

- (nullable MMHairSeparationResult *)separateHairFromHairSegmentationResult:(MMImageSegmentationResult *)mask faceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures NS_SWIFT_NAME(separateHair(from:with:));

- (nullable MMHairSeparationResult *)separateHairFromHairSegmentationResult:(MMImageSegmentationResult *)mask faceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures threshold:(float)threshold NS_SWIFT_NAME(separateHair(from:with:threshold:));

@end

@interface MMContourSeperator: NSObject

+ (CGImageRef)findCenterPart:(CGImageRef)image threshold:(float)threshold CF_RETURNS_RETAINED NS_SWIFT_NAME(findCenterPart(from:thredshold:));

@end



NS_ASSUME_NONNULL_END
