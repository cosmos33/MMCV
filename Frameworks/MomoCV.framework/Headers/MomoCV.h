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
#import "MMCVDefer.h"
#import "MMCVDetectionOptions.h"
#import "MMCVModelLoading.h"
#import "MMCVResources.h"

#if __has_include(<MomoCV/MMFaceFeature.h>)
#import <MomoCV/MMFaceFeature.h>
#endif

#if __has_include(<MomoCV/MMFaceDetector.h>)
#import <MomoCV/MMFaceDetector.h>
#endif

#if __has_include(<MomoCV/MMFaceWarper.h>)
#import <MomoCV/MMFaceWarper.h>
#endif

#if __has_include(<MomoCV/MMBodyWarper.h>)
#import <MomoCV/MMBodyWarper.h>
#endif

#if __has_include(<MomoCV/MMFacialExpressionDetector.h>)
#import <MomoCV/MMFacialExpressionDetector.h>
#endif

#if __has_include(<MomoCV/MMObjectDetector.h>)
#import <MomoCV/MMObjectDetector.h>
#endif

#if __has_include(<MomoCV/MMObjectFeature.h>)
#import <MomoCV/MMObjectFeature.h>
#endif

#if __has_include(<MomoCV/MMObjectTracker.h>)
#import <MomoCV/MMObjectTracker.h>
#endif

#if __has_include(<MomoCV/MMBodyDetector.h>)
#import <MomoCV/MMBodyDetector.h>
#endif

#if __has_include(<MomoCV/MMBodyDetector.h>)
#import <MomoCV/MMBodyDetector.h>
#endif

#if __has_include(<MomoCV/MMOpticalFlowMotionDetector.h>)
#import <MomoCV/MMOpticalFlowMotionDetector.h>
#endif


#if __has_include(<MomoCV/MMObjectDetectorTrackingHelper.h>)
#import <MomoCV/MMObjectDetectorTrackingHelper.h>
#endif

#if __has_include(<MomoCV/MMImageQualityAnalyzer.h>)
#import <MomoCV/MMImageQualityAnalyzer.h>
#endif


#if __has_include(<MomoCV/MMImageSegmenter.h>)
#import <MomoCV/MMImageSegmenter.h>
#endif


#if __has_include(<MomoCV/MMSoundTracker.h>)
#import <MomoCV/MMSoundTracker.h>
#endif

#if __has_include(<MomoCV/MMAudioClassifier.h>)
#import <MomoCV/MMAudioClassifier.h>
#endif

#if __has_include(<MomoCV/MMBarenessDetector.h>)
#import <MomoCV/MMBarenessDetector.h>
#endif
#if __has_include(<MomoCV/MMCashDetector.h>)
#import <MomoCV/MMCashDetector.h>
#endif

#if __has_include(<MomoCV/MMFaceRecognizer.h>)
#import <MomoCV/MMFaceRecognizer.h>
#endif
#if __has_include(<MomoCV/MMFaceAdjustment.h>)
#import <MomoCV/MMFaceAdjustment.h>
#endif
#if __has_include(<MomoCV/MMFaceCluster.h>)
#import <MomoCV/MMFaceCluster.h>
#endif

#if __has_include(<MomoCV/MMFaceQuality.h>)
#import <MomoCV/MMFaceQuality.h>
#endif


#if __has_include(<MomoCV/MMFaceQualityDetector.h>)
#import <MomoCV/MMFaceQualityDetector.h>
#endif

#if __has_include(<MomoCV/MMLipsSegmenter.h>)
#import <MomoCV/MMLipsSegmenter.h>
#endif
#if __has_include(<MomoCV/MMDelaunayTriangulation.h>)
#import <MomoCV/MMDelaunayTriangulation.h>
#endif

#if __has_include(<MomoCV/MMCoreMLBodyDetector.h>)
#import <MomoCV/MMCoreMLBodyDetector.h>
#endif

#if __has_include(<MomoCV/MMGenderDetector.h>)
#import <MomoCV/MMGenderDetector.h>
#endif


#if __has_include(<MomoCV/MMOpenCVUtilities.h>)
#import <MomoCV/MMOpenCVUtilities.h>
#endif

#if __has_include(<MomoCV/MMAgeDetector.h>)
#import <MomoCV/MMAgeDetector.h>
#endif

#if __has_include(<MomoCV/MMExpressionDetector.h>)
#import <MomoCV/MMExpressionDetector.h>
#endif
#if __has_include(<MomoCV/MMFaceGender.h>)
#import <MomoCV/MMFaceGender.h>
#endif

#if __has_include(<MomoCV/MMHandFeature.h>)
#import <MomoCV/MMHandFeature.h>
#endif
#if __has_include(<MomoCV/MMHandGestureDetector.h>)
#import <MomoCV/MMHandGestureDetector.h>
#endif

#if __has_include(<MomoCV/MMMangaFaceProcessing.h>)
#import <MomoCV/MMMangaFaceProcessing.h>
#endif

#if __has_include(<MomoCV/MMBodyJoint.h>)
#import <MomoCV/MMBodyJoint.h>
#endif
#if __has_include(<MomoCV/MMHandLandmarker.h>)
#import <MomoCV/MMHandLandmarker.h>
#endif

#if __has_include(<MomoCV/MMFaceAttractivenessAnalyzer.h>)
#import <MomoCV/MMFaceAttractivenessAnalyzer.h>
#endif
#if __has_include(<MomoCV/MMFaceAnimojiProcessor.h>)
#import <MomoCV/MMFaceAnimojiProcessor.h>
#endif

#if __has_include(<MomoCV/MMCVEventTracker.h>)
#import <MomoCV/MMCVEventTracker.h>
#endif


#if __has_include(<MomoCV/MMBodyAdjustment.h>)
#import <MomoCV/MMBodyAdjustment.h>
#endif

#if __has_include(<MomoCV/MMMultiPartSegmenter.h>)
#import <MomoCV/MMMultiPartSegmenter.h>
#endif


#if __has_include(<MomoCV/MMFaceDetector+TransferMatrix.h>)
#import <MomoCV/MMFaceDetector+TransferMatrix.h>
#endif
