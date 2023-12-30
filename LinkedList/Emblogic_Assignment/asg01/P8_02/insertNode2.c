#include "headers.h"
#include "declarations.h"

void* insertNode2 (void* arg)
{
	Node2  *new;
	printf("%s : Begin\n", __func__);
	new = (Node2*)(*fptr[23])(arg); //CreatNode2
	printf("new : %p\n", (void*)new);
	printf("%s : 1\n", __func__);
	start2 = (Node2*)arg;
	printf("Start2 : %p\n", (void*)start2);
	new->next = start2->next;
	start2->next = new;
	printf("Start2->next : %p\n", (void*)start2->next);
	printf("%s : 2\n", __func__);
	printf("%s : End\n", __func__);
	return (void*)arg;
}
