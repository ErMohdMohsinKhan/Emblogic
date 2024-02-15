#include "headers.h"
#include "declarations.h"
//#include "fileOpr.h" 
unsigned int majorNo, minorNo;
int devSize, nod, dataSize, regSize, noofReg;
dev_t devId;
Dev *myDev;
static int __init initDev(void)
{
	int ret;
        printk(KERN_INFO "%s : Begin\n", __func__);
	majorNo = MAJORNO;
	minorNo = MINORNO;
	nod = NOD;
	devSize = DEVSIZE;
	dataSize = DATASIZE;
	noofReg = NOOFREG;
	regSize = REGSIZE;
        ret = alloc_chrdev_region(&devId, MINORNO, NOD, DEVNAME);
        if (ret == -1) 
        {
                printk(KERN_ERR "ERROR : alloc_chrdev_region() failure\n");
                return -1; 
        }
	majorNo = MAJOR(devId);
	minorNo = MINOR(devId);
        printk(KERN_INFO "%s : Major No : %d\n", __func__, majorNo);
        printk(KERN_INFO "%s : Minor No : %d\n", __func__, minorNo);
        printk(KERN_INFO "%s : End\n", __func__);
	myDev = kmalloc(sizeof(Dev)*NOD, GFP_KERNEL);
	if(!myDev)
	{
		printk(KERN_ERR "ERROR : kmalloc() failure\n");
	}
	memset(myDev, '\0', sizeof(Dev));
        return 0;
}
module_init(initDev);

