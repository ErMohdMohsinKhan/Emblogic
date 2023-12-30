#include "headers.h"
#include "declarations.h"

void delLs(Node *start)
{
        int val, flag;
	Node *last, *crr, *prev;
	crr = start->next;
        printf("%s : Begin\n", __func__);
	printf("%s : Enter the value\n", __func__);
        scanf("%d", &val);
        while(crr)
	{
		if(crr->data == val)
		{
			last = crr;
		}
		crr = crr->next;
	}
	crr = start->next;
	while(crr != last)
	{
		prev = crr;
		crr = crr->next;
	}
	prev->next = last->next;
	free(last);
        printf("%s : Begin\n", __func__);
}

