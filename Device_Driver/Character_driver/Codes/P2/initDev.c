#include "headers.h"
#include "declarations.h"
#include "fileOpr.h" 
dev_t majorNo;
static int __init initDev(void)
{
        printk(KERN_INFO "%s : Begin\n", __func__);
	majorNo = register_chrdev(0, "cdd204", &fops);
	if (majorNo == -1)
	{
		printk(KERN_ERR "ERROR : register_chrdev() failure\n");
		return -1;
	}
        printk(KERN_INFO "%s : Major No : %d\n", __func__, majorNo);
        printk(KERN_INFO "%s : End\n", __func__);
        return 0;
}
module_init(initDev);
