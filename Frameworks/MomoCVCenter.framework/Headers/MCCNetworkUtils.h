//
//  MCCNetworkUtils.h
//  MMCVCenter
//
//  Created by wuzhijia on 2019/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MCCNetworkUtils : NSObject


/**
 * 生成len位，随机字符串
 */
+ (NSString *)randomString: (int) len;

/**
 * 字符转义
 */
+ (NSString *)urlencode: (NSString*) content;

/**
 * 填充User-Agent
 */
+ (NSString *)userAgentString;

@end

NS_ASSUME_NONNULL_END
