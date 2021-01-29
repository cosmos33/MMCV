//
//  MCCDevice.h
//  MMCVCenter
//
//  Created by wuzhijia on 2019/4/19.
//

#import <Foundation/Foundation.h>

#define mcc_IFPGA_NAMESTRING                @"iFPGA"

#define mcc_IPHONE_1G_NAMESTRING            @"iPhone 1G"
#define mcc_IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define mcc_IPHONE_3GS_NAMESTRING           @"iPhone 3GS"
#define mcc_IPHONE_4_NAMESTRING             @"iPhone 4"
#define mcc_IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define mcc_IPHONE_5_NAMESTRING             @"iPhone 5"
#define mcc_IPHONE_5C_NAMESTRING            @"iPhone 5C"
#define mcc_IPHONE_5S_NAMESTRING            @"iPhone 5S"
#define mcc_IPHONE_6_NAMESTRING             @"iPhone 6"
#define mcc_IPHONE_6PLUS_NAMESTRING         @"iPhone 6 Plus"
#define mcc_IPHONE_6S_NAMESTRING            @"iPhone 6S"
#define mcc_IPHONE_6SPLUS_NAMESTRING        @"iPhone 6S Plus"
#define mcc_IPHONE_SE_NAMESTRING            @"iPhone SE"
#define mcc_IPHONE_7_NAMESTRING             @"iPhone 7"
#define mcc_IPHONE_7PLUS_NAMESTRING         @"iPhone 7 Plus"
#define mcc_IPHONE_8_NAMESTRING             @"iPhone 8"
#define mcc_IPHONE_8PLUS_NAMESTRING         @"iPhone 8 Plus"
#define mcc_IPHONE_X_NAMESTRING             @"iPhone X"
#define mcc_IPHONE_XS_NAMESTRING            @"iPhone XS"
#define mcc_IPHONE_XSMAX_NAMESTRING         @"iPhone XS Max"
#define mcc_IPHONE_XR_NAMESTRING            @"iPhone XR"
#define mcc_IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define mcc_IPOD_1G_NAMESTRING              @"iPod touch 1G"
#define mcc_IPOD_2G_NAMESTRING              @"iPod touch 2G"
#define mcc_IPOD_3G_NAMESTRING              @"iPod touch 3G"
#define mcc_IPOD_4G_NAMESTRING              @"iPod touch 4G"
#define mcc_IPOD_5G_NAMESTRING              @"iPod touch 5G"
#define mcc_IPOD_6G_NAMESTRING              @"iPod touch 6G"
#define mcc_IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define mcc_IPAD_1G_NAMESTRING              @"iPad 1G"
#define mcc_IPAD_2G_NAMESTRING              @"iPad 2G"
#define mcc_IPAD_3G_NAMESTRING              @"iPad 3G"
#define mcc_IPAD_4G_NAMESTRING              @"iPad 4G"
#define mcc_IPAD_AIR_NAMESTRING             @"iPad Air"
#define mcc_IPAD_AIR2_NAMESTRING            @"iPad Air 2"
#define mcc_IPAD_PRO9P7INCH_NAMESTRING      @"iPad Pro 9.7-inch"
#define mcc_IPAD_PRO12P9INCH_NAMESTRING     @"iPad Pro 12.9-inch"
#define mcc_IPAD_5G_NAMESTRING              @"iPad 5G"
#define mcc_IPAD_PRO10P5INCH_NAMESTRING     @"iPad Pro 10.5-inch"
#define mcc_IPAD_PRO12P9INCH2G_NAMESTRING   @"iPad Pro 12.9-inch 2G"
#define mcc_IPAD_MINI_NAMESTRING            @"iPad mini"
#define mcc_IPAD_MINI_RETINA_NAMESTRING     @"iPad mini Retina"
#define mcc_IPAD_MINI3_NAMESTRING           @"iPad mini 3"
#define mcc_IPAD_MINI4_NAMESTRING           @"iPad mini 4"
#define mcc_IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define mcc_APPLETV_2G_NAMESTRING           @"Apple TV 2G"
#define mcc_APPLETV_3G_NAMESTRING           @"Apple TV 3G"
#define mcc_APPLETV_4G_NAMESTRING           @"Apple TV 4G"
#define mcc_APPLETV_4K_NAMESTRING           @"Apple TV 4K"
#define mcc_APPLETV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define mcc_IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define mcc_IPHONE_SIMULATOR_NAMESTRING         @"iPhone Simulator"
#define mcc_IPHONE_SIMULATOR_IPHONE_NAMESTRING  @"iPhone Simulator"
#define mcc_IPHONE_SIMULATOR_IPAD_NAMESTRING    @"iPad Simulator"

typedef enum {
    mcc_UIDeviceUnknown,
    
    mcc_UIDeviceiPhoneSimulator,
    mcc_UIDeviceiPhoneSimulatoriPhone, // both regular and iPhone 4 devices
    mcc_UIDeviceiPhoneSimulatoriPad,
    
    mcc_UIDevice1GiPhone,
    mcc_UIDevice3GiPhone,
    mcc_UIDevice3GSiPhone,
    mcc_UIDevice4iPhone,
    mcc_UIDevice4SiPhone,
    mcc_UIDevice5iPhone,
    mcc_UIDevice5CiPhone,
    mcc_UIDevice5SiPhone,
    mcc_UIDevice6iPhone,
    mcc_UIDevice6PlusiPhone,
    mcc_UIDevice6SiPhone,
    mcc_UIDevice6SPlusiPhone,
    mcc_UIDeviceSEiPhone,
    mcc_UIDevice7iPhone,
    mcc_UIDevice7PlusiPhone,
    mcc_UIDevice8iPhone,
    mcc_UIDevice8PlusiPhone,
    mcc_UIDeviceXiPhone,
    mcc_UIDeviceXSiPhone,
    mcc_UIDeviceXSMaxiPhone,
    mcc_UIDeviceXRiPhone,
    
    mcc_UIDevice1GiPod,
    mcc_UIDevice2GiPod,
    mcc_UIDevice3GiPod,
    mcc_UIDevice4GiPod,
    mcc_UIDevice5GiPod,
    mcc_UIDevice6GiPod,
    
    mcc_UIDevice1GiPad,
    mcc_UIDevice2GiPad,
    mcc_UIDevice3GiPad,
    mcc_UIDevice4GiPad,
    mcc_UIDeviceAiriPad,
    mcc_UIDeviceAir2iPad,
    mcc_UIDevicePro9p7InchiPad,
    mcc_UIDevicePro12p9InchiPad,
    mcc_UIDevice5GiPad,
    mcc_UIDevicePro10p5InchiPad,
    mcc_UIDevicePro12p9Inch2GiPad,
    
    mcc_UIDeviceiPadmini,
    mcc_UIDeviceiPadminiRetina,
    mcc_UIDeviceiPadmini3,
    mcc_UIDeviceiPadmini4,
    
    mcc_UIDeviceAppleTV2,
    mcc_UIDeviceAppleTV3,
    mcc_UIDeviceAppleTV4,
    mcc_UIDeviceAppleTV4K,
    mcc_UIDeviceUnknownAppleTV,
    
    mcc_UIDeviceUnknowniPhone,
    mcc_UIDeviceUnknowniPod,
    mcc_UIDeviceUnknowniPad,
    mcc_UIDeviceIFPGA,
    
} mcc_UIDevicePlatform;


NS_ASSUME_NONNULL_BEGIN

@interface MCCDevice : NSObject

+ (mcc_UIDevicePlatform)platformType;
+ (NSString *) platformString;
+ (NSString *) getSysInfoByName:(char *)typeSpecifier;

@end

NS_ASSUME_NONNULL_END
