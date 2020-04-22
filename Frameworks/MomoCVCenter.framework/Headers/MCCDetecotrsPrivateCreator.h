//
//  MDDetectorFactory.h
//  RecordSDK
//
//  Created by sunfei on 2018/12/21.
//  Copyright © 2018 sunfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MCCEnum.h"
#import "MCCDetectorsCenter.h"
@class MMFaceDetector, MMObjectDetector, MMImageSegmenter, MMCoreMLBodyDetector, MMBodyDetector, MMFaceRigV2Detector, MMHandGestureDetector, MMBarenessDetector;

NS_ASSUME_NONNULL_BEGIN

@protocol MCCDetecotrsPrivateCreator <NSObject>

@required
- (id _Nullable )syncMakeFaceDetector:(MCCDetectorType)detectorType;

- (void)asyncMakeFaceDetector:(MCCDetectorType)detectorType complete:(MCCDetectorMakeBlock)completed;

@optional

// 可选，不实现，则默认返回准备好
- (void)prepareManagerEnvironment:(MCCConfigEnvironmentBlock)resultBlock;

//可选，不实现，则默认返回准备好
- (void)prepareDetectors:(NSArray <NSNumber *>*)detectorTypes complete:(MCCDetectorsPrepareBlock)PrepareBlock;

//可选，不实现，则默认返回准备好
- (BOOL)isDetectorEnvironmentPrepared:(MCCDetectorType)detectorType;

//// 人脸检测
//- (MMFaceDetector * _Nullable)makeFaceDetector;
//- (void)asyncAutoMakeFaceDetector:(void(^)(MMFaceDetector * _Nullable detector))completed;
//
//// 手势检测相关
//- (MMObjectDetector * _Nullable)makeObjectDetector;
//- (void)asyncAutoMakeObjectDetector:(void(^)(MMObjectDetector * _Nullable detector))completed;
//
//// 抠图
//- (MMImageSegmenter * _Nullable)makeMomentImageSegmenter;
//- (void)asyncAutoMakeMomentImageSegmenter:(void (^)(MMImageSegmenter * _Nullable ))completed;
//
////关节点检测
//- (MMCoreMLBodyDetector * _Nullable)makeCoreMLBodyDetector NS_AVAILABLE_IOS(11.0);
//- (void)asyncAutoMakeCoreMLBodyDetector:(void(^)(MMCoreMLBodyDetector * _Nullable detector))completed NS_AVAILABLE_IOS(11.0);
//
////关节点检测,非CoreML版
//- (MMBodyDetector * _Nullable)makeBodyDetector;
//- (void)asyncAutoMakeBodyDetector:(void(^)(MMBodyDetector * _Nullable detector))completed;
//
//// 87点人脸检测
//- (MMFaceDetector * _Nullable)makeface87Detector;;
//- (void)asyncAutoMakeFace87Detector:(void(^)(MMFaceDetector * _Nullable detector))completed;
//
//// Facerig
//- (void)asyncAutoMakeFacerigV2Detector:(void(^)(MMFaceRigV2Detector * _Nullable detector))completed;
//
////
//- (MMHandGestureDetector * _Nullable)makeHandGestureDetector;
//- (void)asyncAutoMakeHandGestureDetector:(void (^)(MMHandGestureDetector * _Nullable ))completed;
//
//// 光膀子检测
//- (MMBarenessDetector * _Nullable)makeBarenessDetector;
//- (void)asyncAutoMakeBarenessDetector:(void(^)(MMBarenessDetector * _Nullable detector))completed;
//
//// 新人脸检测
//- (MMFaceDetector * _Nullable)makeNewFaceDetector;
//- (void)newAsyncAutoMakeFaceDetector:(void(^)(MMFaceDetector * _Nullable detector))completed;

@end

NS_ASSUME_NONNULL_END
