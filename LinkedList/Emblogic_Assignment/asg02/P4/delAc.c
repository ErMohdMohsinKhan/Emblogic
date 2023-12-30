#include "headers.h"
#include "declarations.h"

void delAc(Node *start)
{
        int val, flag;
	Node *last, *crr, *prev;
	crr = start;
        printf("%s : Begin\n", __func__);
	printf("%s : Enter the value\n", __func__);
        scanf("%d", &val);
        while(crr->next)
	{
		prev = crr;
		crr = crr->next;
		if(crr->data == val)
		{
			prev->next = crr->next;
			free(crr);
			crr = prev;
		}
	}
        printf("%s : Begin\n", __func__);
}
