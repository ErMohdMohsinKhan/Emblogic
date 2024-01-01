#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* clear (void* arg)
{
        printf("%s : Begin\n", __func__);
        Queue *q = (Queue*)arg;
        q->front = q->rear = NULL;
        printf("%s : Queue is cleared\n", __func__);
        printf("%s : End\n", __func__);
        return 0;
}
