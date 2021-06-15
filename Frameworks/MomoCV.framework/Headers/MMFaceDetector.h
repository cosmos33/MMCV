//
//  MMDLFaceDetector.h
//  Pods
//
//  Created by YuAo on 7/18/16.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "MMCVDetectionOptions.h"

@class MMFaceFeature;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const MMFaceDetectorAlignmentModelPathExtension;
FOUNDATION_EXPORT NSString * const MMFaceDetectorAlignment137PointsModelPathExtension;
FOUNDATION_EXPORT NSString * const MMFaceDetectorFaceAttributeModelPathExtension;

typedef NSString *MMFaceAlignmentModelType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MMFaceAlignmentModelType const MMFaceAlignmentModelType96Points NS_SWIFT_NAME(modelType96Points);
FOUNDATION_EXPORT MMFaceAlignmentModelType const MMFaceAlignmentModelType87Points NS_SWIFT_NAME(modelType87Points);
FOUNDATION_EXPORT MMFaceAlignmentModelType const MMFaceAlignmentModelType137Points NS_SWIFT_NAME(modelType137Points);

FOUNDATION_EXPORT MMFaceAlignmentModelType const MMFaceAlignmentModelType240Points NS_SWIFT_NAME(modelType240Points);

@interface MMFaceDetectorOptions : NSObject <NSCopying>

@property (nonatomic, copy) MMFaceAlignmentModelType faceAlignmentModelType;

@end

typedef NS_ENUM(NSInteger, MMFaceDetectionInputHint) {
    MMFaceDetectionInputHintVideoSequence = 0,
    MMFaceDetectionInputHintStillImage = 1,
    MMFaceDetectionInputHintStaticImage __attribute__((deprecated)) = MMFaceDetectionInputHintStillImage
};

typedef NS_ENUM(NSInteger, MMFaceDetectionMethod) {
    MMFaceDetectionMethodNPD NS_SWIFT_NAME(npd),
    MMFaceDetectionMethodFastRCNN
};

typedef NS_ENUM(NSUInteger, MMFaceDetectionCamraPosition) {
    MMFaceDetectionCamraUnspecified = 0,
    MMFaceDetectionCamraBack        = 1,
    MMFaceDetectionCamraFront       = 2,
};

typedef NS_ENUM(NSInteger, MMPoseEstimationType) {
    MMPoseEstimationTypeNormal,
    MMPoseEstimationTypePrecise,
    MMPoseEstimationTypeNormalBy87Points,
    MMPoseEstimationTypeWithEulers
};

typedef NS_ENUM(NSInteger, MMFaceAlignmentVersion) {
    MMFaceAlignmentVersion96Points   = 0,
    MMFaceAlignmentVersion96WithEyePoints  = 1, // Abandoned
    MMFaceAlignmentVersion137Points  = 2,
    MMFaceAlignmentVersion240Points  = 3,
};

@interface MMEstimatedFaceInfo: NSObject <NSCopying>

@property (nonatomic, readonly) CGRect bounds;

@property (nonatomic, readonly) double roll;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithBounds:(CGRect)bounds roll:(double)roll NS_DESIGNATED_INITIALIZER;

+ (NSArray<MMEstimatedFaceInfo *> *)estimatedFaceInfosFromFaceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures;

@end

@interface MMFaceDetectOptions : NSObject <NSCopying>

@property (nonatomic) MMFaceDetectionInputHint inputHint;

@property (nonatomic) MMCVImageOrientation orientation;

@property (nonatomic) MMFaceDetectionMethod faceDetectionMethod;

@property (nonatomic) MMPoseEstimationType poseEstimationType;

@property (nonatomic) BOOL enablesFaceQualityAnalysis;

@property (nonatomic) BOOL saveFaceFeatures; // default NO

@property (nonatomic) BOOL saveFaceFeatureAsynchronously; // default NO

@property (nonatomic) BOOL featureStrict; // default NO

@property (nonatomic) BOOL stabilizationModeEnabled; // default YES. depends on detector's advancedStabilizationModeEnabled.

@property (nonatomic) BOOL expressionEnabled; // default YES. depends on detector's advancedExpressionDetectionEnabled.

@property (nonatomic) BOOL eyeClassifyEnabled; // default YES. depends on detector's advancedExpressionDetectionEnabled.

@property (nonatomic) BOOL beautyEnabled; // default NO.

@property (nonatomic) BOOL skinEnabled; // default YES.

@property (nonatomic) BOOL faceWarpGradualEnabled; // default NO.

@property (nonatomic) int faceWarpGradualThreshold; // default is 10.

@property (nonatomic) BOOL usesMixFaceDetection; // default is NO. YES if live broadcasting.

@property (nonatomic) BOOL NPDAccelerateEnabled; // default is NO. YES if live broadcasting.

@property (nonatomic) int faceFeatureVersion; // 

@property (nonatomic, copy) NSArray *videoParamConstraintEulerAngles;

// stable keypoints coefs. [0, INF). Use default settings when landmarksStableCoefficient < 0.
@property (nonatomic) float landmarksStableCoefficient;

// stable pose coefs. // default is 2.0.
@property (nonatomic) float poseStableCoefficient;

@property (nonatomic, copy) NSArray<MMEstimatedFaceInfo *> *estimatedFaceInfos;

@property (nonatomic) BOOL asynchronouslyFindFaces;

@property (nonatomic) NSInteger NPDFrameInterval;

@property (nonatomic) NSUInteger maximumFaceCount;

@property (nonatomic) NSUInteger skipFrameCount; // default is 1, no frame skipping

@property (nonatomic) MMCVBusinessType businessType;

@property (nonatomic) MMFaceAlignmentVersion faceAlignmentVersion;

@property (nonatomic) float landmarksScale;

@property (nonatomic) MMFaceDetectionCamraPosition cameraPosition;

@property(nonatomic, assign) float closeEyeThreshold;

@property(nonatomic, assign) float closeMouthThreshold;

@end

@interface MMFaceDetector : NSObject

// default YES. Settings this may not activate stailizationMode, you must set the stabilizationModeEnabled of MMFaceDetectOptions as well.
@property (nonatomic) BOOL advancedStabilizationModeEnabled;

//default NO. Settings this may not activate expression detection, you must set the expressionEnabled of MMFaceDetectOptions as well.
@property (nonatomic) BOOL advancedExpressionDetectionEnabled;

- (NSArray<MMFaceFeature *> *)featuresInPixelBuffer:(CVPixelBufferRef)pixelBuffer;

- (NSArray<MMFaceFeature *> *)featuresInPixelBuffer:(CVPixelBufferRef)pixelBuffer orientation:(MMCVImageOrientation)orientation;

- (NSArray<MMFaceFeature *> *)featuresInPixelBuffer:(CVPixelBufferRef)pixelBuffer options:(MMFaceDetectOptions *)options;

@property (nonatomic,copy,readonly) NSURL *alignmentModelURL;

@property (nonatomic,copy,readonly) NSURL *attributePredictionModelURL;

//+ (BOOL)validateModelBundle:(NSBundle *)bundle API_DEPRECATED("Use the designated initializer to validate", ios(7.0, 8.0));

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability"

- (nullable instancetype)init; //init may fail.

#pragma clang diagnostic pop

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle options:(MMFaceDetectorOptions *)options error:(NSError **)error ;

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error;

- (nullable instancetype)initWithModelURL:(nullable NSURL *)modelURL error:(NSError **)error;

- (nullable instancetype)initWithModelURL:(nullable NSURL *)modelURL famodelURL:(nullable NSURL *)famodelURL error:(NSError **)error NS_DESIGNATED_INITIALIZER;

@end

#pragma mark - DEBUG

CF_EXTERN_C_BEGIN

CF_EXPORT void MMCVDrawPointsInBGRAPixelBuffer(CVPixelBufferRef pixelBuffer, NSArray<NSValue *> *points);

CF_EXTERN_C_END

NS_ASSUME_NONNULL_END
