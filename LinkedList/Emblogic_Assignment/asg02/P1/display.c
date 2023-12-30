#include "headers.h"
#include "declarations.h"

void display(Node *start)
{
        printf("%s : Begin\n", __func__);
         int i = 1;
        Node *dsp = start;
        printf("%s : 1\n", __func__);
        while(dsp->next != NULL)
        {
                dsp = dsp->next;
                printf("%2d : %3d\n", i, dsp->data);
                i++;
        }
        printf("%s : End\n", __func__);
}
