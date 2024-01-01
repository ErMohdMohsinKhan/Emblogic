#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* display(void *arg)
{
	printf("%s : Begin\n", __func__);
        PQueue *ppq = (PQueue *)arg;
        Data *pds = NULL;
        Item *pit = NULL;
        Item *pcit = NULL;
        Item *psl = NULL;
        if(!ppq->pfrst)
        {
                printf("%s : Priority queue is Empty\n", __func__);
        }
        else
        {
		pit = ppq->pfrst;
		printf("%s : Priority :%2d\tValue :%3d\n", __func__, pit->pdata->priority, pit->pdata->value);
		while(pit->pnext)
		{
			pit = pit->pnext;
			printf("%s : Priority :%2d\tValue :%3d\n", __func__, pit->pdata->priority, pit->pdata->value);
		}
	}
	printf("%s : End\n", __func__);
	return arg;
}
