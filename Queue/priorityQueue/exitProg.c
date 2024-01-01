#include "headers.h"
#include "declarations.h"
void* exitProg(void *arg)
{
	printf("%s : Begin\n", __func__);
	if(strncmp((char*)arg, "failure", 7) == 0)
	{
		printf("%s : Abruptly terminating the program...\n", __func__);
		exit(EXIT_FAILURE);
	}
	else if(strncmp((char*)arg, "success", 7) == 0)
	{
		printf("%s : Gracefully exiting the program\n", __func__);
		exit(EXIT_SUCCESS);
	}
	printf("%s :End\n", __func__);
}
