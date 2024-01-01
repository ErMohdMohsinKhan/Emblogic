#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* dequeue(void* arg)
{
	printf("%s : Begin\n", __func__);
	Node *n = (Node*)arg;
	Node *prev = n;
	n = n->next;
	Queue *q = (Queue*)malloc(sizeof(Queue));
	if(!n)
	{
		printf("%s : Queue is emptied\n", __func__);
	}
	else
	{
		while(n->next)
		{
			prev=n;
			n = n->next;
		}
		printf("%s : Value dequeued->%2d\n", __func__, n->data);
		free(n);
		prev->next = NULL;
		q->front = prev;
	}
	printf("%s : End\n", __func__);
	return arg;
}
