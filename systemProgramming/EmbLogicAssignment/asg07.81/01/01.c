#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main (void)
{
	int status;
	pid_t fork_return;
	fork_return = fork();
	if (fork_return == 0)  //Execute by CHILD Process
	{
		printf("I am the Child Process!\n");
		printf("My PID is : %d\n", getpid());
		printf("My PPID is : %d\n", getppid());
		exit(0);
	}
	else //Execute by Parent Process
	{
		wait(&status);
		printf("I am the Parent Process!\n");
		printf("My PID is : %d\n", getpid());
		printf("My PPID is : %d\n", getppid());
		if (WIFEXITED (status))
		{
			printf("Child returned %d\n", WEXITSTATUS(status));
		}
	}
	return 0;
}
