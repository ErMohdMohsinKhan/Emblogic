#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* display(void *arg)
{
	printf("%s : Begin\n", __func__);
	Cir_Q *que = NULL;
        que = (Cir_Q*)arg;
	int i;
	if(!que)
	{
		printf("%s : Sorry, first create a queue\n", __func__);
	}
	else if( (que != NULL) && (que->rear == -1))
	{
		printf("%s : Queue is emptied\n", __func__);
	}
	else
	{
		if(que->front < que->rear)
		{
			for(i=que->front+1; i<= que->rear; i++)
			{
				printf("%s : Value->%2d\n", __func__, que->queue[i]);
			}
		}
		else
		{
			for(i=0; i<=que->rear; i++)
			{
				printf("%s : Value->%2d\n", __func__, que->queue[i]);
			}
			for(i=que->front+1; i<que->size; i++)
			{
				printf("%s : Value->%2d\n", __func__, que->queue[i]);
			}
		}
	}
	printf("%s : End\n", __func__);
	return arg;
}
