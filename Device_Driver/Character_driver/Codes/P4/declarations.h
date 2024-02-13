MODULE_LICENSE ("GPL");
#ifndef MINORNO
#define MINORNO 1
#endif
#ifndef DEVNAME
#define DEVNAME "cdd204"
#endif
#ifndef NOD
#define NOD 1 
#endif
extern unsigned int majorNo, minorNo;
extern int devSize;
extern dev_t devId;
typedef struct dev
{
	int devSize;
}Dev;
extern Dev *myDev;
