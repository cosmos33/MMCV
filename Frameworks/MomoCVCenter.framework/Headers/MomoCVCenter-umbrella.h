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
#import "MCCLogDelegate.h"
#import "MCCArchieve.h"
#import "MCCSecretAESCrypt.h"
#import "MCCSecretRSA.h"
#import "NSData+MCCSecretBase64.h"
#import "NSData+MCCSecretCommonCrypto.h"
#import "NSString+MCCSecretBase64.h"

FOUNDATION_EXPORT double MomoCVCenterVersionNumber;
FOUNDATION_EXPORT const unsigned char MomoCVCenterVersionString[];

