//
//  MMBodyAdjustment.h
//  Pods
//
//  Created by Yu Ao on 2018/6/27.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@class MMBodyFeature;

@interface MMBodyAdjustments: NSObject <NSCopying>

@property (nonatomic) float legLength;
@property (nonatomic) float bodyWidth;

+ (NSSet *)propertyKeys;

@property (nonatomic, readonly) BOOL isIdentity;

@end

@interface MMBodyAdjustmentInput: NSObject

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithBodyFeature:(MMBodyFeature *)bodyFeature adjustments:(MMBodyAdjustments *)adjustments NS_DESIGNATED_INITIALIZER;

@end

@interface MMBodyAdjustmentOutput: NSObject

@property (nonatomic, readonly) NSUInteger vertexCount;

@property (nonatomic, copy, readonly) NSData *verticsData;
@property (nonatomic, copy, readonly) NSData *textureCoordinatesData;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end


@interface MMBodyAdjustmentOptions: NSObject <NSCopying>

@property (nonatomic, class, readonly, strong) MMBodyAdjustmentOptions *defaultOptions;

@end

@interface MMBodyAdjustmentProcessor: NSObject

- (nullable MMBodyAdjustmentOutput *)outputForInputs:(NSArray<MMBodyAdjustmentInput *> *)inputs options:(MMBodyAdjustmentOptions *)options frameSize:(CGSize)frameSize;

- (nullable MMBodyAdjustmentOutput *)outputForInputs:(NSArray<MMBodyAdjustmentInput *> *)inputs frameSize:(CGSize)frameSize;

@end

NS_ASSUME_NONNULL_END
