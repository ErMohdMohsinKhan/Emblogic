#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNodeEnd (void* arg)
{
	Node *strt, *new, *cir;
	printf("%s : Begin\n", __func__);
	strt = cir = (Node*)arg;
	new = (Node*)(*fptr[3])(arg); //CreatNode
	if(strt->next == NULL)
	{
		strt->next = cir->next = new;
		new->prev = cir;
		new->next = cir->next;
	}
	else
	{
	strt = strt->next;
	while(strt->next != cir->next)
	{
		strt = strt->next;
	}
	strt->next = new;
	new->next = cir->next;
	new->prev = strt;
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
