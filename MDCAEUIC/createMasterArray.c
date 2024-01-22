#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* createMasterArray(void* arg)
{
	int size, i, red;
	int* fd;
	fd = (int*)arg;
	DSUnique dun;
	printf("%s : Begin\n", __func__);
	size = lseek(*fd, 0, SEEK_END)-1;
	printf("%s : Size of File : %d\n", __func__, size);
	lseek(*fd, 0, SEEK_SET);
	dun.ma = NULL;
	dun.noc = 0;
	while (size > 0)
	{
		red = read(*fd, &dun.ch, 1);
		if (red == -1)
		{
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		size--;
		if ( *(int*)(*fptr[4])((void*) &dun) )  //Error
		{
			dun.ma = realloc(dun.ma, dun.noc+1); //Allocating memory location
			if (!dun.ma)
			{
				perror("read");
                        	(*fptr[1])((void*)"failure");
			}
			*(dun.ma + dun.noc++) = dun.ch;	
		}
	}
	printf("%s : There are total %d unique characters in file opened at File Descriptor : %d\n", __func__, dun.noc, *fd);
	dun.ma = realloc(dun.ma, dun.noc);
                if (!dun.ma)
                {
                        perror("read");
			(*fptr[1])((void*)"failure");
                }
                *(dun.ma + dun.noc) = '\0'; //Last character is placed as \0 which defines EOS 

	printf("%s : End\n", __func__);
	return (void*)dun.ma;
}
