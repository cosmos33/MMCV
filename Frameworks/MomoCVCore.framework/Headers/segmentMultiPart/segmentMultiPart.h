#pragma once

#include <vector>
#include <string>
#include <MomoCVCore/api_base/momocv_api.h>

namespace mmcv
{

class MMCV_EXPORT SegmentMultiPartParams : public BaseParams
{
public:
    SegmentMultiPartParams();
    virtual ~SegmentMultiPartParams();
    
    virtual void transform_params_by_device();

#ifdef BUILD_JNI
    virtual void from_java(JNIEnv *jenv, jobject params_obj, std::string cname = "com/momocv/segmentMultiPart/SegmentMultiPartParams");
#endif
    bool Parse(const std::string& params_str);
    std::string Dump();

    bool reset_;

    // [0, 1]
    // 1 is video mode, 0 is picture mode.
    // default is 1
    bool video_mode_;

    // [0, INF]
    // process frame with internal pass_frame_count_
    int pass_frame_count_;
    
    // [false, true]
    // default is false
    bool debug_on_;

    // [false, true]
    // default is false
    // bool fillPoly_on_;


    // (0, 1)
    // default is 0.125
    // 分割目标占原图的比例，默认小于原图 1/8 的目标会过滤掉
    float min_object_ratio_;
    
    // debug file destination path.
    // default is "momocv_debug.log"
    std::string debug_output_ ;
    
    std::vector<std::vector<float> > multi_origin_landmarks_96_; //// cqw get face landmark

};

class MMCV_EXPORT SegmentMultiPartInfo
{
public:

#ifdef BUILD_JNI
    virtual void to_java(JNIEnv *jenv, jobject ret, std::string cname = "com/momocv/segmentMultiPart/SegmentMultiPartInfo");
    virtual void from_java(JNIEnv *jenv, jobject ret, std::string cname = "com/momocv/segmentMultiPart/SegmentMultiPartInfo");
#endif
    bool Parse(const std::string& params_str);
    std::string Dump();

    std::vector<std::vector<float> > multi_origin_landmarks_96_; //// cqw get face landmark

    std::vector<uint8_t> mask_;
//    std::vector<int> rect;  //cqw 返回人脸矩形框
};

class MMCV_EXPORT SegmentMultiPart
{
public:
    SegmentMultiPart();
    ~SegmentMultiPart();

    bool load_model(const std::vector<uint8_t>& model_buf);
    bool load_model_async(const std::vector<uint8_t>& model_buf);
    bool load_model(const std::string& model_path);
    bool load_model_async(const std::string& model_path);
    
    bool load_caffe_models_raw(const std::string& proto_path, const std::string& model_path);
    bool load_half_models_raw(const std::string& proto_path, const std::string& model_path);
    bool load_mace_models_raw(const std::string& proto_path, const std::string& model_path);
    bool load_coreml_models_raw(const std::string& proto_path, bool is_compiled = true);
    
    bool load_halfmodel(const std::vector<uint8_t>& half_model_buf);
    bool load_halfmodel(const std::string& half_model_path);
    bool fillPoly_mask(const MMFrame &_frame, SegmentMultiPartParams &params, SegmentMultiPartInfo &_ret);
    bool process_frame(const MMFrame &_frame, const SegmentMultiPartParams &params, SegmentMultiPartInfo &_ret);
    //bool process_frame_face(const MMFrame &_frame, const SegmentationParams &params, SegmentationInfo &_ret);      //cqw

    void reset();
    
private:
    void* sgmp_impl_;
};

}

