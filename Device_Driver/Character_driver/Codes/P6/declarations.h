MODULE_LICENSE ("GPL");
#ifndef MINORNO
#define MINORNO 1
#endif
#ifndef MAJORNO
#define MAJORNO 0
#endif
#ifndef DEVNAME
#define DEVNAME "cdd204"
#endif
#ifndef DEVSIZE
#define DEVSIZE 128
#endif
#ifndef NOD
#define NOD 1 
#endif
#ifndef DATASIZE
#define DATASIZE 0 
#endif
#ifndef REGSIZE
#define REGSIZE 0 
#endif
#ifndef NOOFREG
#define NOOFREG 8 
#endif
extern unsigned int majorNo, minorNo;
extern int devSize, nod, dataSize, regSize, noofReg;
extern dev_t devId;
typedef struct qset
{
	struct qset *next;
	void **data;
}Qset;
typedef struct dev
{
	Qset *first;
	int devSize;
	int dataSize;
	int regSize;
	int noofReg;
}Dev;
extern Dev *myDev;
