//
//  MCCDetectorsCenter.h
//  MCCSDK
//
//  Created by sunfei on 2019/3/7.
//

#import <Foundation/Foundation.h>
#import "MCCEnum.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^MCCConfigEnvironmentBlock)(BOOL result, NSString * __nullable errorMsg);
typedef void (^MCCDetectorsPrepareBlock)(NSDictionary <NSNumber *,NSNumber *>* resultDic);
typedef void (^MCCDetectorMakeBlock)(id __nullable detector);

@interface MCCDetectorsCenter : NSObject

+ (instancetype)sharedInstance;

/**
 * 提前AppId
 */
- (void)configAppId:(NSString *)appId;

/**
 提前获取配置环境
 @param resultBlock 结果回调
 */
- (void)prepareManagerEnvironment:(MCCConfigEnvironmentBlock)resultBlock;

/**
 提前准备Detectors资源（首次准备耗时较长）
 @param detectorTypes 探测器枚举数组。例:@[@(MCCFaceDetectorTypeFace), @(MCCFaceDetectorTypeObject)]
 @param MCCDetectorsPrepareBlock 异步结果回调。例:@{@(MCCFaceDetectorTypeFace):@(YES), @(MCCFaceDetectorTypeObject):@(YES)}
 */
- (void)prepareDetectors:(NSArray <NSNumber *>*)detectorTypes complete:(MCCDetectorsPrepareBlock)MCCDetectorsPrepareBlock;

/**
 判断检测器是否准备好了
 @param detectorType 检测器类型
*/
- (BOOL)isDetectorEnvironmentPrepared:(MCCDetectorType)detectorType;

/**
 同步构造探测器（需先调用prepareDetectors 方法）
 @param detectorType 探测器枚举值
 @return 探测器
 */
- (id _Nullable )syncMakeFaceDetector:(MCCDetectorType)detectorType;

/**
 异步构造探测器（可不先prepareDetectors 方法，内部会先异步调用准备后，再构造探测器）
 @param detectorType 探测器枚举值
 @param completed 结果回调
 */
- (void)asyncMakeFaceDetector:(MCCDetectorType)detectorType complete:(MCCDetectorMakeBlock)completed;

@end

NS_ASSUME_NONNULL_END
