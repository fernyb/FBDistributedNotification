require 'mkmf'

$CFLAGS << " -ObjC "
$LDFLAGS << " -lobjc -framework Foundation"

extension_name = 'FBNotification'

dir_config(extension_name)

create_makefile(extension_name)
