#include "headers.h"
#include "declarations.h"

static void __exit cleanup(void)
{
        printk(KERN_INFO "%s : Begin\n", __func__);
	kfree(myDev);
        unregister_chrdev_region(devId, 1);
        printk(KERN_INFO "%s : End\n", __func__);
}

module_exit(cleanup);
