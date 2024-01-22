#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
/*int exitProg (int status)
{
	printf("%s : Begin\n", __func__);
	if (status == 0 )
	{
		exit(EXIT_SUCCESS);
	}
	else 
	{
		exit(EXIT_FAILURE);
	}
	printf("%s : End\n", __func__);
	return 0;
}*/


void* exitProg(void* status)
{
    printf("%s : Begin\n", __func__);
    if (strncmp((char*)status, "success", 7) == 0)
        exit(EXIT_SUCCESS);
    else if (strncmp((char*)status, "failure", 7) == 0)
        exit(EXIT_FAILURE);
    printf("%s : End\n", __func__);
    return 0;
}
