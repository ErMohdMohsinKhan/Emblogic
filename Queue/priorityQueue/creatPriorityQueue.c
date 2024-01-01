#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* creatPriorityQueue(void *arg)
{
	printf("%s : Begin\n", __func__);
	PQueue *pq;
	if(!arg)
	{
		pq = (PQueue*)malloc(sizeof(PQueue));
		if(!pq)
		{
			perror("malloc");
			(*fptr[0])((void*)"failure");
		}
		pq->count = 0;
		pq->pfrst = NULL;
	}
	else
	{
		printf("%s : Priority Queue is already created\n", __func__);
	}

	printf("%s : End\n", __func__);
	return (void*)pq;
}
