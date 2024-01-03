#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	int fd, dfd;
	char ch[5];
	printf("%s : %s : Begin\n", __FILE__, __func__);
	FILE *file = fopen("newfile", "r");
	if (file == NULL)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	fd = fileno(file);
	printf("%s : %s : File opened successfully at file descriptor : %d\n", __FILE__, __func__, fd);
	close(0);
	
	dfd = dup(fd);
	
	printf("%s : %s : File Descriptor duplicated : %d\n", __FILE__, __func__, dfd);
	printf("%s : %s : Enter a character\n", __FILE__, __func__);
	fscanf(file, "%s", ch);
	printf("%s : %s : Character received : %s\n", __FILE__, __func__, ch);
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
