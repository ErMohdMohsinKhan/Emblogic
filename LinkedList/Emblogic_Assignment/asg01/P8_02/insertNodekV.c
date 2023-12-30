#include "headers.h"
#include "declarations.h"

void* insertNodekV (void* arg)
{
	Node *start, *new;
	start = (Node*)arg;
	int kval;
	printf("%s : Begin\n", __func__);
	printf("%s : Enter key Value\n", __func__);
	scanf("%d", &kval);
	while(start->next)
	{
		start = start->next;
		if(start->data == kval)
		{
			new = (Node*)(*fptr[3])(arg); //CreatNode
			new->next = start->next;
			start->next = new;
			return 0;
		}
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
