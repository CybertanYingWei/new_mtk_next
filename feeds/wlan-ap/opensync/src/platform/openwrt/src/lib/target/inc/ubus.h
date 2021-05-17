#ifndef __UBUS_H_
#define __UBUS_H_

#include <libubox/blobmsg.h>
#include <libubox/blobmsg_json.h>
#include <libubus.h>

struct ubus_watch_list {
	const char *path;
	int wildcard;
};

struct ubus_instance {
	ubus_connect_handler_t connect;
	ubus_handler_t notify;

	int len;
	struct ubus_watch_list list[];
};

extern int ubus_init(struct ubus_instance *instance);
extern uint32_t ubus_lookup_remote(char *name);

#endif
