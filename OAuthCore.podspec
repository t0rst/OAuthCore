# Use OAuthCore from 'development' branch of 't0rst' fork.
# (branch 'master' is waiting for answer to pull request, but upstream (atebits/OAuthCore) looks unmaintained) 
Pod::Spec.new do |s|
  s.name = "OAuthCore"
  s.version = "0.0.2"
  s.license = "Copyright (C) 2012 Loren Brichter"
  s.summary = "Simple function to sign OAuth requests."
  s.homepage = "https://github.com/t0rst/OAuthCore"
  s.author = "Loren Brichter"
  s.ios.deployment_target = "7.0"
  s.osx.deployment_target = "10.9"
  s.source = { :git => "https://github.com/t0rst/OAuthCore.git", :branch => "development", :tag => "0.0.2" }
  s.source_files = "OAuthCore.{h,m}", "OAuth+Additions.{h,m}"
  s.requires_arc = true
end