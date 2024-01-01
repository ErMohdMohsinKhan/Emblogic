#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* enqueue(void *arg)
{
    printf("%s : Begin\n", __func__);
    PQueue *ppq = (PQueue *)arg;

    if (!ppq)
    {
        printf("%s : Priority queue is not found\n", __func__);
    }
    else
    {
        Data *pds = (Data*)malloc(sizeof(Data));
        if (!pds)
        {
            perror("malloc");
            (*fptr[0])((void*)"failure");
        }

        printf("%s : Enter data and priority\n", __func__);
        scanf("%d%d", &pds->value, &pds->priority);

        Item *pit = (Item*)malloc(sizeof(Item));
        if (!pit)
        {
            perror("malloc");
            free(pds);
            (*fptr[0])((void*)"failure");
        }

        pit->pdata = pds;
        pit->pnext = NULL;

        // If empty list or insert at the beginning
        if (!ppq->pfrst || pds->priority < ppq->pfrst->pdata->priority)
        {
            pit->pnext = ppq->pfrst;
            ppq->pfrst = pit;
        }
        else
        {
            Item *pcit = ppq->pfrst;
            Item *psl = NULL;

            // Find the position to insert in the middle or at the end
            while (pcit && pds->priority >= pcit->pdata->priority)
            {
                psl = pcit;
                pcit = pcit->pnext;
            }

            // Insert in the middle or at the end
            psl->pnext = pit;
            pit->pnext = pcit;
        }

        ppq->count++;
    }

    printf("%s : End\n", __func__);
    return arg;
}
