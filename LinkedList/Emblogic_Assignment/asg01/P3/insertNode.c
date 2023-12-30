#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNode (void* arg)
{
	printf("%s : Begin\n", __func__);
	(*fptr[8])(arg); //insertmenu
	printf("%s : End\n", __func__);
	return (void*)arg;
}
