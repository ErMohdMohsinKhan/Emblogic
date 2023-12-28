#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* prtNEnd(void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start = (Node*)arg;
	int num;
	printf("%s : %s : Enter the nth Node number to display its element(from the last)\n", __FILE__, __func__);
	scanf("%d", &num);
	if(!start->next)
	{
		printf("%s : %s : Please first insert a Node to the Linkedlist\n", __FILE__, __func__);
		return 0;
	}
	Node *fast = start->next;
	Node *slow = start->next;
	int i;
	for(i=0; i<num; i++)
	{
		if(fast->next)
		{
			fast = fast->next;
		}
		else
		{
			printf("%s : %s : Entered Node number is larger than total number of Nodes\n", __FILE__, __func__);
			return arg;
		}
	}
	while (fast != NULL)
       	{
        	slow = slow->next;
        	fast = fast->next;
    	}
	printf("%s : %s : The %dth element from the last is %d\n", __FILE__, __func__, num, slow->value);
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
