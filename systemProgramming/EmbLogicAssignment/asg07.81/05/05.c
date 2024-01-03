#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main (void)
{
	int exit_status;
	pid_t pid;
	if ((pid = fork()) < 0)  
	{
		perror("fork error");
		exit(1);
	}
	else if (pid == 0)
	{
		printf("%s : PID : %d\tPPID : %d\tCHILD\n", __FILE__, getpid(), getppid());
		execl("./fork", "fork", "-1", NULL);
		printf("%s : CHILD : Can I print out after execl ...??, PID : %d\tPPID : %d\n", __FILE__, getpid(), getppid());
	}
	else  //Execute by Parent Process
	{
		pid = wait(&exit_status);
		printf("%s : I am the Parent of fork_exec and my PID is : %d\tPPID : %d\n", __FILE__, getpid(), getppid());
	}
	return 0;
}
