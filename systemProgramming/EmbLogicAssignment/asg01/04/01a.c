#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	int fd, dfd;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	fd = open("newfile", O_WRONLY);
	if (dfd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	printf("%s : %s : File opened successfully at file descriptor : %d\n", __FILE__, __func__, fd);
	close(1);
	
	dfd = dup(fd);
	printf("%s : %s : File Descriptor duplicated : %d\n", __FILE__, __func__, dfd);
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
