#include "headers.h"
#include "declarations.h"

void reverse(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *tmp = NULL;  //To store address of the Next Node so that it is NOT lost
	Node *crr = start;
	Node *prev = NULL;
	while (crr != NULL) 
	{
        	tmp = crr->next;
        	crr->next = prev;
        	prev = crr;
        	crr = tmp;
    	}
	Node *dsp = prev;
        printf("%s : LinkList is Reversed\n", __func__);
        while(dsp->next != NULL)
        {
                printf("%2d\n", dsp->data);
                dsp = dsp->next;
        }

	printf("%s : End\n", __func__);
	return;
}
