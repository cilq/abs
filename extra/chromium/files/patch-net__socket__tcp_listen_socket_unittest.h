--- net/socket/tcp_listen_socket_unittest.h.orig	2014-10-10 09:15:31 UTC
+++ net/socket/tcp_listen_socket_unittest.h
@@ -13,6 +13,9 @@
 #include <arpa/inet.h>
 #include <errno.h>
 #include <sys/socket.h>
+#if defined(OS_BSD)
+#include <netinet/in.h>
+#endif
 #endif
 
 #include "base/basictypes.h"
