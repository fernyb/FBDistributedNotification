#import <Foundation/Foundation.h>
#import "ruby.h"

NSString * build_nsstring(VALUE string);

VALUE FBNotification = Qnil;
void Init_FBNotification();
void method_postNotificationName(VALUE self, VALUE name, VALUE options);
