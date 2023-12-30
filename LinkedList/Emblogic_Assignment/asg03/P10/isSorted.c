#include "headers.h"
#include "declarations.h"
int isSorted(Node *start)
{
        printf("%s : Begin\n", __func__);
	Node *crr, *prev;
	prev = crr;
	crr = start->next;
	while(crr)
	{
		if(crr->data < prev->data)
			return 0;
		prev = crr;
		crr = crr->next;
	}
        printf("%s : End\n", __func__);
	return 1;
}
