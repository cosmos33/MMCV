//
//  MCCLogDelegate.h
//  MomoCVCenter
//
//  Created by wuzhijia on 2019/8/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 日志接受者代理
 */
@protocol MCCLogDelegate <NSObject>

@required
- (void)receiveMomoCVCenterLogInfo:(NSDictionary *)logDic;

@end

NS_ASSUME_NONNULL_END
