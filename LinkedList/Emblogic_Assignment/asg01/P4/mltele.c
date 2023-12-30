#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* mltele (void* arg)
{
        Node *start, *pre;
        start = pre = (Node*)arg;
        int value;
        printf("%s : Begin\n", __func__);
        printf("%s : Enter the multipier\n", __func__);
        scanf("%d", &value);
        while(start->next)
        {
                start = start->next;
		start->data = (start->data * value);
		printf("%d\n", start->data);
        }
        printf("%s : End\n", __func__);
        return (void*)pre;
}

