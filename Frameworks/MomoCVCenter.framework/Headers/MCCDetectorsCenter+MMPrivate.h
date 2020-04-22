//
//  MCCDetectorsCenter+Private.h
//  MomoCVCenter
//
//  Created by wuzhijia on 2019/5/30.
//

#import "MCCDetectorsCenter.h"
#import "MCCDetecotrsPrivateCreator.h"

NS_ASSUME_NONNULL_BEGIN

@interface MCCDetectorsCenter (MMPrivate)

@property (nonatomic, weak) id<MCCDetecotrsPrivateCreator> privateCreator;

@end

NS_ASSUME_NONNULL_END
