#
# Be sure to run `pod lib lint XVIEWAMapManager.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XVIEWAMapManager'
  s.version          = '0.1.3'
  s.summary          = '高德地图相关，定位以及导航'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/xiaheng666/XVIEWAMapManager'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xiaheng666' => 'key@xiaheng.net' }
  s.source           = { :git => 'git@github.com:xiaheng666/XVIEWAMapManager.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  #s.source_files = 'XVIEWAMapManager/Classes/**/*'
  
  # s.resource_bundles = {
  #   'XVIEWAMapManager' => ['XVIEWAMapManager/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
   #二级目录
   s.subspec 'XVIEWLocationManager' do |ss|
       ss.source_files = 'XVIEWAMapManager/Classes/XVIEWLocationManager/*.{h,m}'
       ss.ios.vendored_libraries = 'XVIEWAMapManager/Classes/XVIEWLocationManager/*.a'
       ss.dependency 'AMapLocation'
   end
   s.subspec 'XVIEWNaviManager' do |sb|
       sb.source_files = 'XVIEWAMapManager/Classes/XVIEWNaviManager/*.{h,m}'
       sb.ios.vendored_libraries = 'XVIEWAMapManager/Classes/XVIEWNaviManager/*.a'
       #sb.dependency 'AMap3DMap'
       #sb.dependency 'AMapNavi'
   end
end
