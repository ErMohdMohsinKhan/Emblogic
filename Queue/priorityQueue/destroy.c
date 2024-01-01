#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* destroy(void *arg)
{
	printf("%s : Begin\n", __func__);
	PQueue *ppq = (PQueue *)arg;
	Item *pcit = NULL;
	Item *psl = NULL;
	if(!ppq->pfrst)
	{
		return 0;
	}
	pcit = ppq->pfrst;
	if(!pcit->pnext)
	{
		free(pcit->pdata);
		free(pcit);
		ppq->pfrst = NULL;
		return 0;
	}
	while(pcit->pnext)
	{
		psl = pcit;
		pcit = pcit->pnext;
		free(psl->pdata);
		free(psl);
	}
	free(pcit->pdata);
        free(pcit);
	ppq->pfrst = NULL;
	free(ppq);
	printf("%s : End\n", __func__);
	return 0;
}
