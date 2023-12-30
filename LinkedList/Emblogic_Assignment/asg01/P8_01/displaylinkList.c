#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* displaylinkList (void *arg)
{
	Node *start;
	start = (Node*)arg;
	int i = 1;
	printf("%s : Begin\n", __func__);
	while(start->next)
	{
		start = start->next;
		printf("%2d : %3d\n", i, start->data);
		i++;
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
