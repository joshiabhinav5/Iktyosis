/*
 *Here router doesnt mean router per say, it also includes
 *switches, routers , layer 3 swictes.*
 *
 *It shoudl have routing table, arp table , network stack etc
 * */

typedef struct _interface{
	unsigned char IP[4];
	unsigned short mac[6];
}INTERFACE;
#define unsigned int UINT

#include <vector>
class CRouter{
	UINT routerID;///used for uniquely identifying the router
	vector<INTERFACE> Port;///can be called as interfaces

};


