#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* issorted (void* arg)
{
	Node *start, *new;
	start = new = (Node*)arg;
	int count = 0;
	printf("%s : Begin\n", __func__);
	while(start->next)
	{
		new = start;
		start = start->next;
		if(new->data > start->data)
		{
			count++;
		}
	}
	if(count == 0)
		printf("%s : LinkList is sorted in Ascending Order\n", __func__);
	else
		printf("%s : LinkList is NOT sorted in Ascending Order\n", __func__);
	printf("%s : End\n", __func__);
	return arg;
}
