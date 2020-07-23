#
# Be sure to run `pod lib lint MDRecordAndEdit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MMCV'
  s.version          = '1.1.5'
  s.summary          = 'MMCV'

  s.description      = <<-DESC
    MMCV detectors
                       DESC

  s.homepage         = 'https://www.baidu.com/'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'bi.s_fish' => 'sunfeifish@gmail.com' }
  s.source           = { :git => 'https://github.com/cosmos33/MMCV.git', :tag => '1.1.4'}

  s.ios.deployment_target = '9.0'

  
  s.libraries = 'c++'
 # s.default_subspecs = {}
  # s.vendored_frameworks = 'Frameworks/**/*.framework'
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => '$(inherited) NO', 'OTHER_LDFLAGS' => '$(inherited) -ObjC', 'MTL_LANGUAGE_REVISION' => 'Metal12', 'CLANG_WARN_DOCUMENTATION_COMMENTS' => '$(inherited) NO'}

s.subspec 'MomoCV' do |ss|
ss.vendored_frameworks = ['Frameworks/ceres.framework','Frameworks/MNN.framework','Frameworks/MomoAPCore.framework','Frameworks/MomoCV.framework','Frameworks/MomoCVBase.framework','Frameworks/MomoCVCore.framework','Frameworks/opencv2.framework','Frameworks/protobufc.framework',]
ss.frameworks = 'Accelerate', 'CoreImage', 'AssetsLibrary'
ss.weak_frameworks = 'CoreML', 'Vision'

end

s.subspec 'MomoCVCenter' do |ss|
ss.vendored_frameworks = 'Frameworks/MomoCVCenter.framework'


end

  s.dependency 'ZipArchive'
  s.dependency 'MCCSecret'
  s.dependency 'PhotonHTTPDNS'
  s.dependency 'MMFileService'
  s.resources = 'Resources/*'
  
end
