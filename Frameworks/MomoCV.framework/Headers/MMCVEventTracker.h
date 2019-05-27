//
//  MMCVEventTracker.h
//  MomoCV
//
//  Created by MOMO on 2019/4/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMCVEventClientInfo : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *cpuType;
@property (nonatomic, copy) NSString *gpuType;

@end

typedef void(^MMEventTrackerCallback)(NSString *info);
@interface MMCVEventTracker : NSObject

/**
 注册日志回调
 */
+ (void)registerClientInfo:(MMCVEventClientInfo *)clientInfo eventTrackingCallback:(MMEventTrackerCallback)callback;

+ (void)setClientInfo:(MMCVEventClientInfo *)clientInfo;
+ (void)setEventTrackingCallback:(MMEventTrackerCallback)callback;

+ (void)release;
+ (void)enable;
+ (void)disable;

@end

NS_ASSUME_NONNULL_END
