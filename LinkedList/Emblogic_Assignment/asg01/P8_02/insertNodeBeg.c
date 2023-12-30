#include "headers.h"
#include "declarations.h"

void* insertNodeBeg (void* arg)
{
	Node *strt, *new;
	printf("%s : Begin\n", __func__);
	new = (Node*)(*fptr[3])(arg); //CreatNode
	strt = (Node*)arg;
	new->next = strt->next;
	strt->next = new;
	printf("%s : End\n", __func__);
	return (void*)arg;
}
