#include "headers.h"
#include "declarations.h"

void* displayNode (void *arg)
{
	printf("%s : Begin\n", __func__);
	Node *crr = (Node *)arg;
	while(crr->next)
	{
		crr = crr->next;
		printf("Value-> %d\t", crr->data);
	}
	printf("\n%s : End\n", __func__);
	return arg;
}
