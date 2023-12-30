#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* sorting (void* arg)
{
	Node *start, *cir, *sl_l;
	start = cir = sl_l = (Node*)arg;
        printf("%s : Begin\n", __func__);
	int temp = '\0';
	Node *outer = start->next;
	printf("%s : Sorting begin\n", __func__);
        do
        {
		printf("");
	        start = start->next;
                sl_l = start;
                start = start->next;
	while(start)
        {
                if(sl_l->data > start->data)
                {
                        temp = sl_l->data;
                        sl_l->data = start->data;
                        start->data = temp;
                }
                sl_l = start;
                start = start->next;
        }
        outer = outer->next;
        }while(outer != cir->next);
	//printf("%s : Result after sorting\n", __func__);
		
        printf("%s : End\n", __func__);
	return (void*)arg;
}
