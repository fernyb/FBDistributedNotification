#import "FBNotification.h"

NSString * build_nsstring(VALUE string) {
  if (string == Qnil) {
    return nil;
  } else {
    return [NSString stringWithCString:StringValuePtr(string) encoding:NSASCIIStringEncoding];
  }
}

void Init_FBNotification() {
  FBNotification = rb_define_module("FBNotification");
  rb_define_method(FBNotification, "postNotificationName", method_postNotificationName, 2);
}

void method_postNotificationName(VALUE self, VALUE name, VALUE options) {
  // - (void)postNotificationName:(NSString *)notificationName object:(NSString *)notificationSender
  Check_Type(options, T_HASH);
  VALUE object = rb_hash_aref(options, ID2SYM(rb_intern("object")));

  NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

  NSNotification * notify = [NSDistributedNotificationCenter defaultCenter];
  [notify postNotificationName:build_nsstring(name)
                        object:build_nsstring(object)
                      userInfo:nil
            deliverImmediately:YES];

  [pool drain];
}
