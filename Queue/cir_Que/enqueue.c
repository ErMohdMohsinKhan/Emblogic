#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* enqueue(void *arg)
{
	printf("%s : Begin\n", __func__);
	Cir_Q *que = NULL;
	que = (Cir_Q*)arg;
	if(!que)
	{
		que = (Cir_Q*)malloc(sizeof(Cir_Q)); //Allocating space for structue
		if(!que)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		printf("%s : Enter the size of Queue\n", __func__);
		scanf("%d", &que->size);
		que->queue = (int*)malloc(sizeof(int)*(que->size)); //Allocating space for array
		if(!que->queue)
		{
			perror("malloc");
                        exit(EXIT_FAILURE);
		}
		printf("%s : Memory allocated successfully for array\n", __func__);
		que->front = que->rear = -1;
		return (void*)que;
	}
	else
	{
		if( que->front != -1 && (((que->rear)+1)%(que->size)) == que->front+1 )
		{
			printf("%s : Sorry, OVERFLOW\n", __func__);
			printf("front->%d\n", que->front);
		}
		else if(que->front == -1 && que->rear == que->size-1)
		{
			printf("%s : Sorry, OVERFLOW\n", __func__);
		}
		else
		{
			que->rear = ((que->rear)+1)%(que->size);
			printf("%s : Please enter the value\n", __func__);
			scanf("%d", &que->queue[que->rear]);
		}	
	}
	printf("%s : End\n", __func__);
	return arg;;
}
