#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* deleteNode (void* arg)
{
	Node *start;
	start = (Node*)arg;
	printf("%s : Begin\n", __func__);
	if (start->next)
	{
		(*fptr[12])(arg); //deleteMenu
	}
	else
		printf("%s : LinkList is already Emptied\n", __func__);
	printf("%s : End\n", __func__);
	return (void*)arg;
}
