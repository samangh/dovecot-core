#ifndef __MASTER_LOGIN_INTERFACE_H
#define __MASTER_LOGIN_INTERFACE_H

#include "network.h"

#define LOGIN_MASTER_SOCKET_FD 0
#define LOGIN_LISTEN_FD 1
#define LOGIN_SSL_LISTEN_FD 2

struct master_login_request {
	unsigned int tag;

	unsigned int auth_pid;
	unsigned int auth_id;

	struct ip_addr ip;
};

struct master_login_reply {
	unsigned int tag;
	int success;
};

#endif
