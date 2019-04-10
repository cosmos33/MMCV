//
//  MMArpetProcessor.h
//  MomoCV
//
//  Created by wuzhijia on 2018/7/18.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MMQualityArpetType) {
    MMQualitySharpnessLow = 0,  //清晰度不够
    MMQualitySharpnessHigh = 1, //清晰度高
    MMQualityBrightnessLow = 2, //亮度不够
    MMQualityBackScreen = 3,    //黑屏
    MMQualityOK = 4             //质量ok
};

typedef NS_ENUM(NSInteger, MMArpetGroupPhotoType) {
    MMArpetGroupSingle = 0, //非合影
    MMArpetGroupMulity = 1  //合影
};

typedef NS_ENUM(NSInteger, MMArpetUpwardShotType) {    
    MMArpetUpwardGood = 0,  //非仰拍大脸
    MMArpetUpwardBad = 1    //仰拍大脸
};

typedef NS_ENUM(NSInteger, MMArpetPhotoStationState) {
    MMArpetPhotoStationStateOther = 0,  //其他状态
    MMArpetPhotoStationStateSmoke = 1,    //抽烟场景
    MMArpetPhotoStationStateBed = 2    //床上场景
};

typedef NS_ENUM(NSInteger, MMArpetScenary) {
    MMArpetScenaryOther     = 0,        //其他场景
    MMArpetScenaryBuilding  = 1,        //建筑
    MMArpetScenaryLandspace = 2,        //风景
    MMArpetScenaryOutdoor   = 3         //室外
};

typedef NS_ENUM(NSInteger, MMArpetExposed) {
    MMArpetExposedFalse     = 0,        //非光膀子
    MMArpetExposedTrue      = 1        //光膀子
};

@interface MMArpetResult : NSObject <NSCopying>

@property (nonatomic) MMQualityArpetType qualityType;
@property (nonatomic) MMArpetGroupPhotoType groupType;
@property (nonatomic) MMArpetUpwardShotType upwardType;
@property (nonatomic) MMArpetPhotoStationState stationState;
@property (nonatomic) MMArpetScenary scenaryType;
@property (nonatomic) MMArpetExposed exposeType;

@end

@interface MMArpetOptions : NSObject <NSCopying>

@property (nonatomic) BOOL barenessSwitch;
@property (nonatomic) BOOL qualitySwitch;
@property (nonatomic) BOOL faceDetectSwitch;
@property (nonatomic) BOOL photoStationSwitch;
@property (nonatomic) BOOL scenarySwitch;

@property (nonatomic) CGFloat faceRatio;
@property (nonatomic) CGFloat faceAnguler;
@property (nonatomic) CGFloat clarityTop;
@property (nonatomic) CGFloat clarityDown;
@property (nonatomic) CGFloat brightnessDown;


@end


@interface MMArpetProcessor : NSObject

@property (nonatomic, readonly) NSURL *arpetModelURL;
@property (nonatomic, readonly) NSURL *fdModelURL;
@property (nonatomic, readonly) NSURL *bdModelURL;

+ (BOOL)validateModelBundle:(NSBundle *)bundle;

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithModelBundle:(nullable NSBundle *)bundle error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (nullable MMArpetResult *)arpetInfosInPixelBuffer:(CVPixelBufferRef)pixelBuffer options:(MMArpetOptions*)options;


@end

NS_ASSUME_NONNULL_END
