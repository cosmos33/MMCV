//
//  MCCDetectorsCenter.h
//  MCCSDK
//
//  Created by sunfei on 2019/3/7.
//

#import <Foundation/Foundation.h>
#import "MCCEnum.h"
#import "MCCLogDelegate.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^MCCConfigEnvironmentBlock)(BOOL result, NSString * __nullable errorMsg);
typedef void (^MCCDetectorsPrepareBlock)(NSDictionary <NSNumber *,NSNumber *>* resultDic);
typedef void (^MCCDetectorMakeBlock)(id __nullable detector);

@interface MCCDetectorsCenter : NSObject

@property(atomic, copy,readonly) NSString *AppId;
@property(atomic, copy,readonly) NSString *TrickId;
@property(atomic, assign,readonly) BOOL enabledSyncUpload; //同步上传日志开关


+ (instancetype)sharedInstance;

/**
 * 提前AppId
 */
- (void)configAppId:(NSString *)appId;
/**
* 用户查日志标识
*/
- (void)configTrickId:(NSString *)trickId;
/**
* 设置日志上报方式 (默认为异步上传)
*/
- (void)configUploadLogsOption:(BOOL)enable;


/**
 提前获取配置环境
 @param resultBlock 结果回调
 */
- (void)prepareManagerEnvironment:(MCCConfigEnvironmentBlock)resultBlock;

/**
 提前准备Detectors资源（首次准备耗时较长）
 @param detectorTypes 探测器枚举数组。例:@[@(MCCFaceDetectorTypeFace), @(MCCFaceDetectorTypeObject)]
 @param PrepareBlock 异步结果回调。例:@{@(MCCFaceDetectorTypeFace):@(YES), @(MCCFaceDetectorTypeObject):@(YES)}
 */
- (void)prepareDetectors:(NSArray <NSNumber *>*)detectorTypes complete:(MCCDetectorsPrepareBlock)PrepareBlock;

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

/**
 注册日志监听(会强持有，需要移除)
 @param observer 日志监听者
 */
- (void)registLogObserver:(id<MCCLogDelegate>)observer;

/**
 注册日志监听
 @param observer 日志监听者
 */
- (void)removeLogObserver:(id<MCCLogDelegate>)observer;

@end

NS_ASSUME_NONNULL_END
