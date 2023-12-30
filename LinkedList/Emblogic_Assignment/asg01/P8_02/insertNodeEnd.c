#include "headers.h"
#include "declarations.h"

void* insertNodeEnd (void* arg)
{
	Node *strt, *new;
	printf("%s : Begin\n", __func__);
	strt = (Node*)arg;
	while(strt->next)
	{
		strt = strt->next;
	}
	new = (Node*)(*fptr[3])(arg); //CreatNode
	strt->next = new;
	new->next = NULL;
	printf("%s : End\n", __func__);
	return (void*)arg;
}
