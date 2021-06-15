//
//  MMFaceFeature-Private.h
//  MomoCVDemo
//
//  Created by YuAo on 4/25/16.
//  Copyright © 2016 Momo. All rights reserved.
//

#import <vector>
#import <Foundation/Foundation.h>
#import <MomoCVCore/MomoCVCore.h>
#import "MMFaceFeature.h"
#import "MMCVDetectionOptions.h"

struct MMFaceFeatureInternalRepresentation {
    std::vector<float> bounds;//left top right bottom
    
    std::vector<float> landmarks96;
    std::vector<float> landmarks68;
    std::vector<float> landmarks87;
    std::vector<float> landmarks104;
    std::vector<float> landmarks106;
    std::vector<float> landmarks137;
    std::vector<float> landmarks222;
    std::vector<float> landmarks240;
    
    std::vector<float> origin_landmarks96;
    std::vector<float> origin_landmarks68;
    std::vector<float> origin_landmarks87;
    std::vector<float> origin_landmarks104;
    std::vector<float> origin_landmarks106;
    std::vector<float> origin_landmarks137;
    std::vector<float> origin_landmarks222;
    std::vector<float> origin_landmarks240;
    
    std::vector<float> euler_angles;
    
    std::vector<int> skin_color_threshold;
    
    float face_rotate_degree;
    float left_eye_close_prob;
    float right_eye_close_prob;
    
    int tracking_id;
    
    // 每个人脸对应一个拉长的 3x3 矩阵，按行存储
    std::vector<float> camera_matrix;
    
    // 每个人脸对应一个拉长的 3x3 矩阵，
    std::vector<float> rotation_matrix;
    
    // 每个人脸对应一个拉长的 3 维向量，
    std::vector<float> rotation_vector;
    
    // 每个人脸对应一个拉长的 3 维向量，
    std::vector<float> translation_vector;
    
    // 每个人脸对应一个拉长的 3x4 矩阵，
    std::vector<float> projection_matrix;
    
    // 每个人脸对应一个拉长的 4x4 矩阵，
    std::vector<float> modelview_matrix;
    
    std::vector<float> projection_matrix_opengl;
    
    int expression;
    
    std::vector<float> facerig_feature;
    
    std::vector<uint8_t> feature;
    
    int quality;
    
    CGSize imageSize;
};

typedef struct MMFaceFeatureInternalRepresentation MMFaceFeatureInternalRepresentation;

extern MMFaceFeatureInternalRepresentation MMFaceFeatureInternalRepresentationMakeWithFaceAttributes(mmcv::SingleFaceInfo face, mmcv::FaceAttribute attr, size_t imageWidth, size_t imageHeight);
extern MMFaceFeatureInternalRepresentation MMFaceFeatureInternalRepresentationMake(mmcv::SingleFaceInfo face, size_t imageWidth, size_t imageHeight);

extern MMFaceFeatureInternalRepresentation MMFaceFeatureInternalRepresentationMakeWithFacePoseInfo(mmcv::FacePoseInfo face, size_t imageWidth, size_t imageHeight);


@interface MMFaceFeature (Private)

@property (nonatomic,readonly) MMFaceFeatureInternalRepresentation internalRepresentation;

- (instancetype)initWithInternelRepresentation:(MMFaceFeatureInternalRepresentation)internalRepresentation;

- (void)updateRepresentationFacerigFeature:(std::vector<float>)facerigFeature;

@end
