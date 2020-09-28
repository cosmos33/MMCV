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

#import "MMCVCGImageUtilities.h"
#import "MMCVCoreImageBuffer.h"
#import "MMCVDefer.h"
#import "MMCVDetectionOptions.h"
#import "MMCVModelLoading.h"
#import "MMCVResources.h"

#if __has_include(MMFaceFeature.h)
#import <MMFaceFeature.h>
#endif

#if __has_include(MMFaceDetector.h)
#import <MMFaceDetector.h>
#endif

#if __has_include(MMFaceWarper.h)
#import <MMFaceWarper.h>
#endif

#if __has_include(MMBodyWarper.h)
#import <MMBodyWarper.h>
#endif

#if __has_include(MMFacialExpressionDetector.h)
#import <MMFacialExpressionDetector.h>
#endif

#if __has_include(MMObjectDetector.h)
#import <MMObjectDetector.h>
#endif

#if __has_include(MMObjectFeature.h)
#import <MMObjectFeature.h>
#endif

#if __has_include(MMObjectTracker.h)
#import <MMObjectTracker.h>
#endif

#if __has_include(MMBodyDetector.h)
#import <MMBodyDetector.h>
#endif

#if __has_include(MMBodyDetector.h)
#import <MMBodyDetector.h>
#endif

#if __has_include(MMOpticalFlowMotionDetector.h)
#import <MMOpticalFlowMotionDetector.h>
#endif


#if __has_include(MMObjectDetectorTrackingHelper.h)
#import <MMObjectDetectorTrackingHelper.h>
#endif

#if __has_include(MMImageQualityAnalyzer.h)
#import <MMImageQualityAnalyzer.h>
#endif


#if __has_include(MMImageSegmenter.h)
#import <MMImageSegmenter.h>
#endif


#if __has_include(MMSoundTracker.h)
#import <MMSoundTracker.h>
#endif

#if __has_include(MMAudioClassifier.h)
#import <MMAudioClassifier.h>
#endif

#if __has_include(MMBarenessDetector.h)
#import <MMBarenessDetector.h>
#endif
#if __has_include(MMCashDetector.h)
#import <MMCashDetector.h>
#endif

#if __has_include(MMFaceRecognizer.h)
#import <MMFaceRecognizer.h>
#endif
#if __has_include(MMFaceAdjustment.h)
#import <MMFaceAdjustment.h>
#endif
#if __has_include(MMFaceCluster.h)
#import <MMFaceCluster.h>
#endif

#if __has_include(MMFaceQuality.h)
#import <MMFaceQuality.h>
#endif


#if __has_include(MMFaceQualityDetector.h)
#import <MMFaceQualityDetector.h>
#endif

#if __has_include(MMLipsSegmenter.h)
#import <MMLipsSegmenter.h>
#endif
#if __has_include(MMDelaunayTriangulation.h)
#import <MMDelaunayTriangulation.h>
#endif

#if __has_include(MMCoreMLBodyDetector.h)
#import <MMCoreMLBodyDetector.h>
#endif

#if __has_include(MMGenderDetector.h)
#import <MMGenderDetector.h>
#endif


#if __has_include(MMOpenCVUtilities.h)
#import <MMOpenCVUtilities.h>
#endif

#if __has_include(MMAgeDetector.h)
#import <MMAgeDetector.h>
#endif

#if __has_include(MMExpressionDetector.h)
#import <MMExpressionDetector.h>
#endif
#if __has_include(MMFaceGender.h)
#import <MMFaceGender.h>
#endif

#if __has_include(MMHandFeature.h)
#import <MMHandFeature.h>
#endif
#if __has_include(MMHandGestureDetector.h)
#import <MMHandGestureDetector.h>
#endif

#if __has_include(MMMangaFaceProcessing.h)
#import <MMMangaFaceProcessing.h>
#endif

#if __has_include(MMBodyJoint.h)
#import <MMBodyJoint.h>
#endif
#if __has_include(MMHandLandmarker.h)
#import <MMHandLandmarker.h>
#endif

#if __has_include(MMFaceAttractivenessAnalyzer.h)
#import <MMFaceAttractivenessAnalyzer.h>
#endif
#if __has_include(MMFaceAnimojiProcessor.h)
#import <MMFaceAnimojiProcessor.h>
#endif

#if __has_include(MMCVEventTracker.h)
#import <MMCVEventTracker.h>
#endif


#if __has_include(MMBodyAdjustment.h)
#import <MMBodyAdjustment.h>
#endif

#if __has_include(MMMultiPartSegmenter.h)
#import <MMMultiPartSegmenter.h>
#endif


#if __has_include(MMFaceDetector+TransferMatrix.h)
#import <MMFaceDetector+TransferMatrix.h>
#endif
