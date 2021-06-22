//
//  MMGestureFeature_Private.h
//  Pods
//
//  Created by YuAo on 11/14/16.
//
//

#import "MMObjectFeature.h"
#import <MomoCVCore/MomoCVCore.h>

struct MMObjectFeatureInternalRepresentation {
    mmcv::MMRect bounds;//left top right bottom
    std::string type;
    float score;
};
typedef struct MMObjectFeatureInternalRepresentation MMObjectFeatureInternalRepresentation;

@interface MMObjectFeature (Private)

@property (nonatomic,readonly) MMObjectFeatureInternalRepresentation internalRepresentation;

- (instancetype)initWithInternelRepresentation:(MMObjectFeatureInternalRepresentation)internalRepresentation;

@end
