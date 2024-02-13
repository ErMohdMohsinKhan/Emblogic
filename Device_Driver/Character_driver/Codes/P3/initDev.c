#include "headers.h"
#include "declarations.h"
//#include "fileOpr.h" 
unsigned int majorNo, minorNo;
dev_t mydev;
static int __init initDev(void)
{
	int ret;
        printk(KERN_INFO "%s : Begin\n", __func__);
        ret = alloc_chrdev_region(&mydev, MINORNO, NOD, DEVNAME);
        if (ret == -1) 
        {
                printk(KERN_ERR "ERROR : alloc_chrdev_region() failure\n");
                return -1; 
        }
	majorNo = MAJOR(mydev);
	minorNo = MINOR(mydev);
        printk(KERN_INFO "%s : Major No : %d\n", __func__, majorNo);
        printk(KERN_INFO "%s : Minor No : %d\n", __func__, minorNo);
        printk(KERN_INFO "%s : End\n", __func__);
        return 0;
}
module_init(initDev);

