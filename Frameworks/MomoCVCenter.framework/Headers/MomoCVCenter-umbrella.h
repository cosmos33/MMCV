#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MCCDetectorsCenter.h"
#import "MCCEnum.h"
#import "MCCDevice.h"
#import "MCCZipArchieveDelegate.h"
#import "MCCNetworkUtils.h"
#import "MCCLogDelegate.h"
#import "MCCDetecotrsPrivateCreator.h"
#import "MCCDetectorsCenter+MMPrivate.h"

FOUNDATION_EXPORT double MomoCVCenterVersionNumber;
FOUNDATION_EXPORT const unsigned char MomoCVCenterVersionString[];

