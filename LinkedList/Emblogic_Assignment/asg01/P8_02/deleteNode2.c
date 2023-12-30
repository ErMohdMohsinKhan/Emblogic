#include "headers.h"
#include "declarations.h"

void* deleteNode2 (void* arg)
{
	Node2 *start2, *beg;
        start2 = beg = (Node2*)arg;
        printf("%s : Begin\n", __func__);
        beg = start2->next;
        start2->next = beg->next;
        free(beg);
        printf("%s : End\n", __func__);

	return (void*)arg;
}
