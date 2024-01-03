#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int g = 2;
int main (void)
{
	pid_t pid;
	int l = 3;
	printf("PID : %d PARENT g : %d, l = %d\n", getpid(), g, l);
	if ((pid = fork ()) < 0)
	{
		perror("fork error");
		exit(1);
	}
	else if (pid == 0)
	{
		g++;
		l++;
		printf("I am a new Child and my Process Id is : %d\n", getpid());
		printf("I am a new Child and my Parent Process Id is : %d\n", getppid());
		printf("Child Process now terminates\n");
	}
	else
	{
		g = g*100;
		l = l*300;
		printf("I am Parent and my Process Id is : %d\n", getpid());
		printf("I am Parent and my Parent Process Id is : %d\n", getppid());
		printf("Parent Process now terminates\n");
	}
	printf("\n...Who Am I ?? : %d : g = %d; l = %d\n", getpid(), g, l);
	printf("\n...Who is my Parent ?? : %d\n", getppid());
	return 0;
}
