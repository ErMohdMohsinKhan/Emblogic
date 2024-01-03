#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int value = 5;
int main (void)
{
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		wait(NULL);
		sleep(5);
		printf("PID : %d\tPPID : %d\tCHILD BEGIN\n", getpid(), getppid());
		value += 15;
		for (int i=value; i>0; i--)
                {
                        printf("CHILD : Value : %d\tPID : %d\tPPID : %d\n", i, getpid(), getppid());
                }
	
		printf("PID : %d\tPPID : %d\tCHILD END\n", getpid(), getppid());
		return 0;
	}
	else if (pid > 0)
	{
		printf("PID : %d\tPPID : %d\tPARENT BEGIN\n", getpid(), getppid());
		for (int i=value; i>0; i--)
		{
			printf("PARENT : Value : %d\tPID : %d\tPPID : %d\n", i, getpid(), getppid());
		}
		printf("PID : %d\tPPID : %d\tPARENT END\n", getpid(), getppid());
		return 0;
	}
	return 0;
}
