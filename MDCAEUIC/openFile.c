#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* openFile(void* mode)
{
	int *fd;
	char ch;
	char *filename;
	printf("%s : Begin\n", __func__);
	filename = (char*)malloc(20);
	if (!filename)
	{
		perror("malloc");
		exitProg("failure");
	}
	memset(filename, '\0', 20);
	int i=0;
	do
	{
		ch = getchar();
		if (ch == '\n')
		{
			break;
		}
		*(filename + i++) = ch;

	} while(1);
	printf("%s : Filename : %s\n", __func__, filename);
	
	fd = (int*)malloc(sizeof(int));
	if (!fd)
        {
                perror("malloc");
		free(filename);
                exitProg("failure");
        }

	  if (strncmp((char*)mode, "writing", 7) == 0)
	  {
		  *fd = open(filename, O_WRONLY);
	  }
    	else if (strncmp((char*)mode, "reading", 7) == 0)
   	 {
	    *fd = open(filename, O_RDONLY);
   	 }
	else if (strncmp((char*)mode, "creat", 7) == 0)
         {
            *fd = open(filename, O_CREAT|O_WRONLY);
         }

        if (*fd == -1)
        {
                perror("open");
                exitProg("failure");
        }

	printf("%s : End\n", __func__);
	return (void*)fd;
}
