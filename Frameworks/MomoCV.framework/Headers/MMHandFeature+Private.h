//
// Created by momo783 on 20/08/2018.
//

#import "MMHandFeature.h"
#import <MomoCVCore/MomoCVCore.h>

struct MMHandFeatureInternalRepresentation {
//    mmcv::HandLandmarkInfo landmarkInfo;
    std::vector<mmcv::MMBox> gestures;
};
typedef struct MMHandFeatureInternalRepresentation MMHandFeatureInternalRepresentation;

@interface MMHandFeature (Private)

@property (nonatomic,readonly) MMHandFeatureInternalRepresentation internalRepresentation;

- (instancetype)initWithInternelRepresentation:(MMHandFeatureInternalRepresentation)internalRepresentation;

@end
