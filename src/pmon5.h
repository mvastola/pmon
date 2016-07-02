// Plain C
#include <sys/socket.h> // /usr/include/sys/socket.h
#include <linux/netlink.h> // /usr/include/linux/netlink.h
#include <linux/connector.h> // /usr/include/linux/connector.h
#include <linux/cn_proc.h> // /usr/include/linux/cn_proc.h
#include <unistd.h> // /usr/include/unistd.h
#include <getopt.h> // /usr/include/getopt.h

// Upgraded to C++
#include <csignal>
#include <cerrno>
#include <cstdbool>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <ctime>


static volatile bool need_exit;
static bool doDebug;
static bool doTimeStamp;
static time_t last_now;
static time_t now;
static char timestamp_buffer[64];
static bool exitIfParentDies;
static pid_t saved_ppid;
