#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* creatLinkedlist(void* arg)
{
	Node *start = (void*)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	if(arg)
	{
		printf("%s : %s : Linkedlist is already created\n", __FILE__, __func__);
	}
	else
	{
		start = (Node*)((*fptr[6])(arg));  //creatNode()
		printf("%s : %s : Linkedlist is created successfully\n", __FILE__, __func__);
		return (void*)start;
	}
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg;
}
