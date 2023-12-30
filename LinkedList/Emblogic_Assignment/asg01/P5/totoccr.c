#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* totoccr(void* arg)
{
	Node *start;
	start = (Node*)arg;
	int value, count;
	count = 0;
	printf("%s : Begin\n", __func__);
	printf("%s : Enter the item value\n", __func__);
	scanf("%d", &value);
	while(start->next)
	{
		start = start->next;
		if(start->data == value)
		{
			count++;
		}
	}
	printf("%s : Total number of occurences for %2d -> %2d\n", __func__, value, count);
	printf("%s : End\n", __func__);
	return (void*)start;
}
