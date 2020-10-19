//
//  MMCVDefer.h
//  Pods
//
//  Created by YuAo on 6/28/16.
//
//

#import <Foundation/Foundation.h>

#define mmcv_macro_concat_(A, B) A ## B

/**
 * Returns A and B concatenated after full macro expansion.
 */
#define mmcv_macro_concat(A, B) \
        mmcv_macro_concat_(A, B)


#define MMCVDefer \
try {} @finally {} \
__strong MMCVDeferCleanupBlock mmcv_macro_concat(MMCVDeferBlock_, __LINE__) __attribute__((cleanup(MMCVDeferExecuteCleanupBlock), unused)) = ^

typedef void (^MMCVDeferCleanupBlock)(void);

FOUNDATION_EXPORT void MMCVDeferExecuteCleanupBlock (__strong MMCVDeferCleanupBlock *block);
