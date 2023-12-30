#include "headers.h"
#include "declarations.h"

void* displaylinkList2 (void *arg)
{
	//Node2 *start2;
	start2 = (Node2*)arg;
	int i = 1;
	printf("%s : Begin\n", __func__);
	while(start2->next)
	{
		start2 = start2->next;
		printf("%2d : %3d\n", i, start2->data2);
		i++;
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
