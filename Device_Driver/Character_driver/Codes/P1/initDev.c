#include "headers.h"
#include "declarations.h"

static int __init initDev(void)
{
	printk(KERN_INFO "%s : Begin\n", __func__);

	printk(KERN_INFO "hello Kernel!\n");
	printk(KERN_INFO "%s : End\n", __func__);
	return 0;
}
module_init(initDev);
