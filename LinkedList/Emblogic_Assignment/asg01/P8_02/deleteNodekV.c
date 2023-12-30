#include "headers.h"
#include "declarations.h"

void* deleteNodekV (void* arg)
{
	Node *start, *kdel;
	int kval;
	printf("%s : Begin\n", __func__);
	printf("%s : Enter the key value\n", __func__);
	scanf("%d", &kval);
	start = kdel = (Node*)arg;
	while(start->next)
        {
                kdel = start->next;
                if(kdel->data == kval)
                {
                        start->next = kdel->next;
                        free(kdel);
                        return 0;
                }
                start = start->next;
        }
	printf("%s : End\n", __func__);
	return (void*)arg;
}
