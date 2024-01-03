#include "headers.h"

int main(void)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("PPID :%d\tPID : %d\n", getppid(), getpid());
	int n, ret;
	ret = fork(); //Creates a Child Process
	switch (ret)
	{
		case -1:
			perror("fork");
			break;
		case 0:
			n = 5;
			printf("PPID :%d\tPID : %d\tCHILD\tn = %d\n", getppid(), getpid(), n);
			printf("PPID :%d\tPID : %d\tCHILD\t&n = %p\n", getppid(), getpid(), &n);
			break;
		default:
			n=10;
			printf("PPID :%d\tPID : %d\tPARENT\tn = %d\n", getppid(), getpid(), n);
			printf("PPID :%d\tPID : %d\tPARENT\t&n = %p\n", getppid(), getpid(), &n);
	}
	printf("%s : %s : n = :%d\tEnd\n", __FILE__, __func__, n);
	return 0;
}
