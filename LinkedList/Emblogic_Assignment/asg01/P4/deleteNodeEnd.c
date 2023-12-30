#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* deleteNodeEnd (void* arg)
{
	Node *start, *sln;
	start = sln = (Node*)arg;
	printf("%s : Begin\n", __func__);
	while(start->next)
	{
		sln = start;
		start = start->next;	
	}
	free(start);
	sln->next = NULL;
	printf("%s : End\n", __func__);
	return (void*)arg;
}
