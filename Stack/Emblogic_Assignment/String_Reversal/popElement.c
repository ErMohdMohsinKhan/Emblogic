#include "headers.h"
#include "declarations.h"

int popElement (Node *start)
{
//	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *crr = start;
	Node *prev = NULL;
	while(crr->next)
	{
		prev = crr;
		crr = crr->next;
	}
	printf("%c", crr->data);
	prev->next = NULL;
	stk->top = prev;
	free(crr);
//	printf("%s : %s : End\n", __FILE__, __func__);
	return 1;
}
