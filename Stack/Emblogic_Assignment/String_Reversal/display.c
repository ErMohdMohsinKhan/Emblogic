#include "headers.h"
#include "declarations.h"

void display(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *crr = start->next;
	int i = 0;
	while(crr != stk->top)
	{
		printf("%s : %2d->%3d\n", __func__, i++, crr->data);
		crr = crr->next;
	}
	printf("%s : %2d->%3d\n", __func__, i++, crr->data);
	printf("%s : End\n", __func__);
}
