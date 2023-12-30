#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* deleteNodenP (void* arg)
{
	Node *start, *del;
	int pos, count;
	count = 0;
	printf("%s : Begin\n", __func__);
	printf("%s : Enter the position number to delete\n", __func__);
	scanf("%d", &pos);
	start = del = (Node*)arg;
	while(start->next)
	{
		count++;
		if(count == pos)
		{
			del = start->next;
			start->next = del->next;
			free(del);
			return 0;
		}
		start = start->next;
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
