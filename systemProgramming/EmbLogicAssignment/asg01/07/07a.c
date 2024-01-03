#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : PPID is %d\n",  __FILE__, __func__, getppid());
	printf("%s : %s : PID is %d\n", __FILE__, __func__,  getpid());
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
