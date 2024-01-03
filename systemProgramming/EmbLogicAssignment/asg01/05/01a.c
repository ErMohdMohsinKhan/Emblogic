#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	int fd, dfd;
	FILE* file;
	char ch[8];
	char name[] = "newfile";
	printf("%s : %s : Begin\n", __FILE__, __func__);
	file = fopen("newfile", "r");
	if (file == NULL)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	fd = fileno(file); // Get the file descriptor from the FILE*
    	printf("%s : %s : File Descriptor : %d\n", __FILE__, __func__, fd);
	printf("%s : %s : File opened successfully at file descriptor : %d\n", __FILE__, __func__, fd);
	close(0);
	
	dfd = dup(fd);
	printf("%s : %s : File Descriptor duplicated : %d\n", __FILE__, __func__, dfd);
	printf("%s : %s : Please enter a character\n", __FILE__, __func__);
	//scanf(" %c", &ch);
	fgets(ch, 8, file);
	printf("%s : %s : You entered : %s\n", __FILE__, __func__, ch);
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
