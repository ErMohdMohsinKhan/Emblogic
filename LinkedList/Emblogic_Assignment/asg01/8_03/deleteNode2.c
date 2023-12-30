#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* deleteNode2 (void* arg)
{
	Node2 *start, *beg;
        start = beg = (Node2*)arg;
        printf("%s : Begin\n", __func__);
        beg = start->next;
        start->next = beg->next;
        free(beg);
        printf("%s : End\n", __func__);

	return (void*)arg;
}
