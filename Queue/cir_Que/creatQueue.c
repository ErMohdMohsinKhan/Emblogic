#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* creatQueue(void *arg)
{
	printf("%s : Begin\n", __func__);
	if(!arg)
	{
		return (*fptr[2])(arg); //enque
	}
	else
		printf("%s : Circular Queue is already created\n", __func__);
	printf("%s : End\n", __func__);
	return arg;
}
