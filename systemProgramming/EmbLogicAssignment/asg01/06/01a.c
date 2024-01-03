#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main (void)
{
	int fd, dfd, new_fd;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	fd = open("f1", O_RDONLY);
	if (dfd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	printf("%s : %s : File opened successfully at file descriptor : %d\n", __FILE__, __func__, fd);
	printf("%s : %s : Enter File Descriptor to be duplicated with %d\n", __FILE__, __func__, fd);
	scanf("%d", &new_fd);
	dfd = dup2(fd, new_fd);
	printf("%s : %s : File Descriptor DFD duplicated using dup2 : %d\n", __FILE__, __func__, dfd);
	printf("%s : %s : File Descriptor Original returned by open : %d\n", __FILE__, __func__, fd);
	printf("%s : %s : File Descriptor Entered by user : %d\n", __FILE__, __func__, new_fd);
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
