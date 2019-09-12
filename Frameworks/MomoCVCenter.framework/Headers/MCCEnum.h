//
//  MCCEnum.h
//  MMCVCenter
//
//  Created by wuzhijia on 2019/4/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MCCDetectorType) {
    MCCFaceDetectorTypeNone = 0,
    MCCFaceDetectorTypeFace = 1,                    // 人脸检测
    MCCFaceDetectorTypeObject = 2,                  // 手势检测
    MCCFaceDetectorTypeMomentImageSegmenter =3,     // 抠图检测器
    MCCFaceDetectorTypeBareness = 4,                // 光膀子检测器
    MCCFaceDetectorTypeBodyJoint =5,                // 人体关节点
    MCCFaceDetectorTypeExpress =6,                  //直播表情检测器
    MCCFaceDetectorTypeFacialExpression =7,         //普通表情检测器
    MCCFaceDetectorTypeFacerigV3 =8,                // FacerigV3检测器
    MCCFaceDetectorTypeHandGesture =9,              // 新版手势检测
    MCCFaceDetectorTypeFaceQuality =10,              //人脸质量检测器
    MCCFaceDetectorType137Face = 11,                 //人脸137检测器
    MCCFaceDetectorTypeLiveFace = 12                 //直播人脸检测器
};

typedef NS_ENUM(NSUInteger, MCCErrorLogType) {
    MCCErrorLogTypeNone = 0,
    MCCErrorLogTypeConfigError          = 1,    //config 错误
    MCCErrorLogTypeDownloadModelError   = 2,    //下载错误
    MCCErrorLogTypeLoadModelError       = 3     //加载模型错误
};


