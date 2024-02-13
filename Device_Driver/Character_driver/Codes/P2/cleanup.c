#include "headers.h"
#include "declarations.h"

static void __exit cleanup(void)
{
        printk(KERN_INFO "%s : Begin\n", __func__);
	unregister_chrdev(majorNo, "cdd204");
        printk(KERN_INFO "%s : End\n", __func__);
}

module_exit(cleanup);
