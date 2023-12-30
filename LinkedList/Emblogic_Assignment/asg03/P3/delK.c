#include "headers.h"
#include "declarations.h"

void delK(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *prev = start;
	Node *crr = start->next;
	int num;
	int count = 0;
	printf("%s : Enter the node number\n", __func__);
	scanf("%d", &num);
	while(crr)
	{
		count++;
		if(count == num)
		{
			prev->next = crr->next;
			free(crr);
			break;
		}
			prev = prev->next;
			crr = crr->next;
	}
	printf("%s : End\n", __func__);
}
