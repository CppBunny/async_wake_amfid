#ifndef async_wake_h
#define async_wake_h

#include <stdio.h>

mach_port_t go(void);
uid_t get_root (uint64_t);
char* bundle_path();
#endif /* async_wake_h */
