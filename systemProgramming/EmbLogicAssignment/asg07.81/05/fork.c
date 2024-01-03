#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char* argv[])
{
	printf("%s : Begin\tPID : %d\tPPID : %d\n", __FILE__, getpid(), getppid());
	printf("%s : Total no of Arguments Passed is : %d\n", __FILE__, argc);
	printf("%s : Name of file : %s\n", __FILE__, argv[0]);
	printf("%s : End\tPID : %d\tPPID : %d\n", __FILE__, getpid(), getppid());
	return 0;
}
