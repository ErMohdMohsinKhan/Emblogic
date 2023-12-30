#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* creatLinkList2 (void* arg)
{
	Node2 *start2;
	start2 = (Node2*)arg;
	printf("%s : Begin\n", __func__);
	if (start2)
	{
		printf("%s : %s : LinkedList is already created\n", __FILE__, __func__);
		return ((void*)start2);
	}
	else
	{
		start2 = (*fptr[23])((void*)start2); //creatNode2
		return (void*)start2;
	}
	printf("%s : End\n", __func__);
}
