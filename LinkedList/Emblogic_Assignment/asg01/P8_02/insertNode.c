#include "headers.h"
#include "declarations.h"

void* insertNode (void* arg)
{
	printf("%s : Begin\n", __func__);
	(*fptr[7])(arg); //insertmenu
	printf("%s : End\n", __func__);
	return (void*)arg;
}
