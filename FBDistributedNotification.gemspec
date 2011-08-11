# -*- encoding: utf-8 -*-
$:.push File.expand_path("../lib", __FILE__)
require "FBDistributedNotification/version"

Gem::Specification.new do |s|
  s.name        = "FBDistributedNotification"
  s.version     = Fbdistributednotification::VERSION
  s.authors     = ["Fernando Barajas"]
  s.email       = ["fernyb@fernyb.net"]
  s.homepage    = "http://fernyb.net/"
  s.summary     = %q{Send messages with NSDistributedNotificationCenter}
  s.description = %q{A Gem that can send messages using NSDistributedNotificationCenter}

  s.rubyforge_project = "FBDistributedNotification"

  s.files         = `git ls-files`.split("\n")
  s.test_files    = `git ls-files -- {test,spec,features}/*`.split("\n")
  s.executables   = `git ls-files -- bin/*`.split("\n").map{ |f| File.basename(f) }
  s.extensions    = ["ext/extconf.rb"]
  s.require_paths = ["lib"]
end
