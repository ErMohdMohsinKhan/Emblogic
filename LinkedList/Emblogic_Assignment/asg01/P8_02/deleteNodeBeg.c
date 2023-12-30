#include "headers.h"
#include "declarations.h"

void* deleteNodeBeg (void* arg)
{
	Node *start, *beg;
	start = beg = (Node*)arg;
	printf("%s : Begin\n", __func__);
	beg = start->next;
	start->next = beg->next;
	free(beg);
	printf("%s : End\n", __func__);
	return (void*)arg;
}
