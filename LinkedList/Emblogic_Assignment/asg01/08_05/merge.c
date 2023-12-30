#include "headers.h"
#include "declarations.h"

void merge(Node *start, Node *start2)
{
	printf("%s : Begin\n", __func__);
	int i = 1;
        Node *dsp = start;
        Node *dsp2 = start2;
	Node *ms_sort;
        Node *merge_sort;
	ms_sort = merge_sort = start;
        printf("%s : Begin\n", __func__);
        while(dsp->next)
        {
                dsp = dsp->next;
                merge_sort = merge_sort->next;
                printf("%2d : %3d\n", i, dsp->data);
                i++;
        }
//	merge_sort->next = dsp2->next;
        while(dsp2->next)
        {
                dsp2 = dsp2->next;
                merge_sort->next = dsp2;
		merge_sort = merge_sort->next;
                printf("%2d : %3d\n", i, dsp2->data);
                i++;
        }
	printf("%s : Merged, now sorting\n", __func__);
	(*stll)(ms_sort);
	printf("%s : End\n", __func__);
}
