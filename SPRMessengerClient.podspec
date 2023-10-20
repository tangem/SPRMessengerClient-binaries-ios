#
#  Be sure to run `pod spec lint SPRMessengerClient.podspec' to ensure this is a
#  valid spec

Pod::Spec.new do |spec|
  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  spec.name         = "SPRMessengerClient"
  spec.version      = "3.6.2"
  spec.summary      = "Sdk for Sprinklr Live Chat"
  spec.homepage     = "https://clients-nexus.sprinklr.com/spr-messenger/ios"
  spec.license      = { :type => 'Copyright', :text => 'Copyright © 2019 Sprinklr' }
  spec.author       = { "Sprinklr" => "mobileteam@sprinklr.com" }
  spec.platform     = :ios, "10.0"
  # spec.source       = { :http => "https://clients-nexus.sprinklr.com/spr-messenger/ios/v0.0.1/SPRMessengerClient_iOS.zip" }
  spec.source       = { :path => '.' }
  spec.vendored_frameworks = 'SPRMessengerClient.xcframework'
  spec.exclude_files = "Classes/Exclude"
  spec.frameworks = "Foundation", "UIKit"
  spec.requires_arc = true
end
