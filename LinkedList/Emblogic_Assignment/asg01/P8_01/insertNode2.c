#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNode2 (void* arg)
{
	Node2 *strt, *new;
	printf("%s : Begin\n", __func__);
	new = (Node2*)(*fptr[23])(arg); //CreatNode2
	strt = (Node2*)arg;
	new->next = strt->next;
	strt->next = new;
	printf("%s : End\n", __func__);
	return (void*)arg;
}
