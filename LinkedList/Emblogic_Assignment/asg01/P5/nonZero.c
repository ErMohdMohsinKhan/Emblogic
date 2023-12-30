#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* nonZero (void* arg)
{
        Node *start;
	int count = 0;
        start = (Node*)arg;
        printf("%s : Begin\n", __func__);
        while(start->next)
        {
                start = start->next;
		if (start->data >= 1)
		{
			count++;
		}
        }
	printf("%s : Total number of non-zero elements : %2d\n", __func__, count);
        printf("%s : End\n", __func__);
        return arg;
}

