## FBDistributedNotification


A Ruby Gem to send notifications via
[NSDistributedNotificationCenter](NSDistributedNotificationCenter)

The FB in FBDistributedNotification stands for Fernando Barajas not
Facebook.


### How do you use it?
    require 'FBDistributedNotification'
    
    notification = FBDistributedNotification.new
    notification.postNotificationName("RailsMailPreview.email", :object => m.encoded.to_lf)

### What is it used for?
It's used to send notification of any kind. It's currently only being
used to send email notifications to which
[RailsMailPreview](https://github.com/fernyb/RailsMailPreview) is
listening for.

### Who wrote it?
Fernando Barajas ( fernyb at fernyb dot net)

