#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* destroy (void* arg)
{
        printf("%s : Begin\n", __func__);
        Queue *q = (Queue*)arg;
	free(q);
	q = NULL;
        printf("%s : Queue is destroyed successfully\n", __func__);
        printf("%s : End\n", __func__);
        return 0;
}
