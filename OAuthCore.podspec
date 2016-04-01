Pod::Spec.new do |s|
  s.name = "OAuthCore"
  s.version = "0.0.2"
  s.license = "Copyright (C) 2012 Loren Brichter"
  s.summary = "Simple function to sign OAuth requests."
  s.homepage = "https://github.com/atebits/OAuthCore"
  s.author = "Loren Brichter"
  s.ios.deployment_target = "7.0"
  s.osx.deployment_target = "10.9"
  s.source = { :git => "https://github.com/atebits/OAuthCore.git", :tag => "0.0.2" }
  s.source_files = "OAuthCore.{h,m}", "OAuth+Additions.{h,m}"
  s.requires_arc = true
end