#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* dequeue(void *arg)
{
        printf("%s : Begin\n", __func__);
        PQueue *ppq = (PQueue *)arg;
        Item *pcit = NULL;
        Item *tmp = NULL;
         if (!ppq)
        {
                printf("%s : Priority queue is not found\n", __func__);
        }
        else
        {
		if(!ppq->pfrst)
		{
			printf("%s : %s : Now, Queue is emptied\n", __FILE__, __func__);
			return arg;
		}
		pcit = ppq->pfrst;
		printf("%s : %s : Element to be dequed : %d->%3d\n", __FILE__, __func__, pcit->pdata->priority, pcit->pdata->value);
		free(pcit->pdata);
		tmp = pcit->pnext;
		free(pcit);
		ppq->pfrst = tmp;
	}
	 printf("%s : End\n", __func__);
        return arg;
}
