//
//  MCCZipArchieveDelegate.h
//  MomoCVCenter
//
//  Created by wuzhijia on 2019/6/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MCCZipArchieveDelegate <NSObject>

-(BOOL) UnzipOpenFile:(NSString*) zipFile;

-(BOOL) UnzipCloseFile;

-(BOOL) UnzipFileTo:(NSString*) path overWrite:(BOOL) overwrite;

@end

NS_ASSUME_NONNULL_END
