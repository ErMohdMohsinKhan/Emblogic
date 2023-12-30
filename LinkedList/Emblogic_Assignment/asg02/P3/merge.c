#include "headers.h"
#include "declarations.h"

void merge(Node *start, Node *start2)
{
	printf("%s : Begin\n", __func__);
	int i = 1;
        Node *dsp1 = start;
        Node *dsp2 = start2;
	Node *ms_sort;
        Node *merge_sort;
	ms_sort = merge_sort = start;
        while(dsp1->next)
        {
                dsp1 = dsp1->next;
                merge_sort = merge_sort->next;
               // printf("%2d : %3d\n", i, dsp1->data);
                i++;
        }
        while(dsp2->next)
        {
                dsp2 = dsp2->next;
                merge_sort->next = dsp2;
		merge_sort = merge_sort->next;
               // printf("%2d : %3d\n", i, dsp2->data);
                i++;
        }
	printf("%s : Merged Done\n", __func__);
	(*dsp)(start);
	printf("%s : End\n", __func__);
}
