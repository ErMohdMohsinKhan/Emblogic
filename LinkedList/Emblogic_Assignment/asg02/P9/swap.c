#include "headers.h"
#include "declarations.h"

void swap(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *ssl = NULL;
	Node *stp = start;
	if(stp->next)
	{
		ssl = stp->next; //Holds address of First Node
	}
	while(stp->next)
	{
		stp = stp->next; //stp has address of last node
	}
	start->next = ssl->next;  //assigning Second Node as First Node
	stp->next = ssl; //Last node is assigned address of First Node
	ssl->next = NULL; //Last Node's next address points to NULL
	printf("%s : End\n", __func__);
	(*dsp)(start);
}
