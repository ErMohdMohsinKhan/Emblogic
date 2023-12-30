#include "headers.h"
#include "declarations.h"

int display(Node *start)
{
        printf("%s : Begin\n", __func__);
        int i = 0;
        Node *dsp = start;
        printf("%s : Begin\n", __func__);
        while(dsp->next != NULL)
        {
                dsp = dsp->next;
                printf("%2d : %3d\n", i, dsp->data);
                i++;
        }
        printf("%s : End\n", __func__);
	return i;
}
