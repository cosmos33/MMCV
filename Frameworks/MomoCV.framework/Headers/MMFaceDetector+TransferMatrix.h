//
//  MMFaceDetector+TransferMatrix.h
//  MomoCV
//
//  Created by MOMO on 2020/1/16.
//

#import <GLKit/GLKit.h>
#import "MMCVDetectionOptions.h"
#import "MMFaceDetector.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMFacePoseOptions : NSObject <NSCopying>

@property (nonatomic) MMCVImageOrientation orientation;

@property (nonatomic, strong) NSArray<NSNumber *> *landmarks;

@property (nonatomic) CGFloat imageWidth;
@property (nonatomic) CGFloat imageHeight;

@property (nonatomic) BOOL filpedShow;

@end

@interface MMFacePoseInfo : NSObject

@property (nonatomic,readonly) CGSize imageSize;

@property (nonatomic,readonly) double pitch;
@property (nonatomic,readonly) double yaw;
@property (nonatomic,readonly) double roll;

@property (nonatomic,readonly) GLKMatrix3 cameraMatrix;
@property (nonatomic,readonly) GLKMatrix3 rotationMatrix;

@property (nonatomic,readonly) GLKVector3 rotationVector;
@property (nonatomic,readonly) GLKVector3 translationVector;

@property (nonatomic,readonly) GLKMatrix4 projectionMatrix;

@property (nonatomic,readonly) GLKMatrix4 modelViewMatrix;

@property (nonatomic,readonly) GLKMatrix4 projectionMatrixOpengl;

@end

@interface MMFaceDetector (TransferMatrix)

+ (MMFacePoseInfo *)calcRtmatrixWithOptions:(MMFacePoseOptions *)options;

@end

NS_ASSUME_NONNULL_END
