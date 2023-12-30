#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* creatLinkList (void* arg)
{
	Node *start = NULL;
	start = (Node*)arg;
	Node *start2 = NULL;
	start2 = (Node2*)arg;
	printf("%s : Begin\n", __func__);
	if (start)
	{
		printf("%s : %s : LinkedList is already created\n", __FILE__, __func__);
		return ((void*)start);
	}
	else if (start2)
	{
		printf("%s : %s : LinkedList2 is already created\n", __FILE__, __func__);
                return ((void*)start2);
	}
	else
		return (*fptr[3])((void*)start); //creatNode
	printf("%s : End\n", __func__);
}
