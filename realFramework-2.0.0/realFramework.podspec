Pod::Spec.new do |s|
  s.name = 'realFramework'
  s.version = '2.0.0'
  s.summary = 'A test of realFramework.'
  s.license = 'MIT'
  s.authors = {"jinbin"=>"king2210@qq.com"}
  s.homepage = 'https://github.com/rogerjinHub/realFramework'
  s.description = '                       This is the testing of realFramework

                       * Markdown format.
                       * Don't worry about the indent, we strip it!
'
  s.requires_arc = true
  s.source = {}

  s.platform = :ios, '7.0'
  s.ios.platform             = :ios, '7.0'
  s.ios.preserve_paths       = 'ios/realFramework.framework'
  s.ios.public_header_files  = 'ios/realFramework.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/realFramework.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/realFramework.framework'
end
