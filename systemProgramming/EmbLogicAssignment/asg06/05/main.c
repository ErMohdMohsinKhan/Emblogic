#include "headers.h"

int main(void)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("PPID :%d\tPID : %d\n", getppid(), getpid());
	int ret;
	ret = fork(); //Creates a Child Process
	switch (ret)
	{
		case -1:
			perror("fork");
			break;
		case 0:
			printf("PPID :%d\tPID : %d\tCHILD\n", getppid(), getpid());
			break;
		default:
			printf("PPID :%d\tPID : %d\tPARENT\n", getppid(), getpid());
	}
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
