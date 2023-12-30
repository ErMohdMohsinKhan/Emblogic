#include "headers.h"
#include "declarations.h"

void display(Node *start)
{
	printf("%s : Begin\n", __func__);
	int i = 1;
        Node *dsp = start;
        printf("%s : Begin\n", __func__);
	printf("----------------------------------------------------------\n");
        while(dsp->next != NULL)
        {
                dsp = dsp->next;
                printf("%2d\t%s\t%s\t%.2f\n", dsp->empid, dsp->dept, dsp->ename, dsp->salary);
        }
	printf("----------------------------------------------------------\n");
	printf("%s : End\n", __func__);
}
