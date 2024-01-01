#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* dequeue(void *arg)
{
	printf("%s : Begin\n", __func__);
	Cir_Q *q = NULL;
	q = (Cir_Q*)arg;
	if(!q)
	{
		printf("%s : Queue does not exist, please create it\n", __func__);
	}
	else
	{
		if(q->front == q->rear == -1)
		{
			printf("%s : Queue is already emptied\n", __func__);
		}
		else
		{
			q->front = ((q->front+1)%(q->size));
			printf("%s : Value->>%2d\n", __func__, q->queue[q->front]);
		}
	}
	printf("%s : End\n", __func__);
	return arg;
}
