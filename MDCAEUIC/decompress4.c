#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* decompress4 (void *arg)
{
	int noc, ret, i, dfd;
	unsigned char c, dc;
	DSUnique dun;
	printf("%s : Begin\n",__func__);
	DSCompress *dco;
	dco = (DSCompress*)arg;
	dun.noc = lseek(dco->fd, 0, SEEK_END)-1;
	lseek(dco->fd, 0, SEEK_SET);
	printf("%s : Name the Decompressed File\n",__func__);
	dfd = *(int*)(*fptr[2])((void*)"creat"); //Openfile
	while(1)
	{
		ret = read(dco->fd, &dun.ch, 1);
		if(ret == -1)
		{
			perror("read");
                        (*fptr[1])((void*)"failure");
		}
		dun.noc--;
		c = dun.ch;
		printf("character read : %c\n", c);
		c >>= 4;
		i = (unsigned int)c;
		printf("i : %u\n", i);
		dc = dco->ma[i];
		printf("dc : %c\n", dc);
		ret = write(dfd, &dc, 1);
		if(ret == -1)
		{
			perror("write");
                        (*fptr[1])((void*)"failure");
		}
		c = dun.ch;
		c <<= 4;
		c >>= 4;
		i = (unsigned int)c;
		printf("i : %u\n", i);
		dc = dco->ma[i];
		printf("dc : %c\n", dc);
		ret = write(dfd, &dc, 1);
		if(ret == -1)
		{
			perror("write");
                        (*fptr[1])((void*)"failure");
		}
		if(dun.noc<= 0)
			break;
	}
	close(dfd);
	printf("%s : End\n",__func__);
	return 0;
}
