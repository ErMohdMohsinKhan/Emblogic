#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* displaylinkList2 (void *arg)
{
	Node2 *start;
	start = (Node2*)arg;
	int i = 1;
	printf("%s : Begin\n", __func__);
	while(start->next)
	{
		start = start->next;
		printf("%2d : %3d\n", i, start->data2);
		i++;
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
