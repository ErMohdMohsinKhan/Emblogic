#include "headers.h"
#include "declarations.h"

void middle(Node *start)
{
	int lc = 0;
	int hc = count/2;
	printf("%s : Count/2->%d\n", __func__, count);
	Node *crr = start->next;
	printf("%s : Begin\n", __func__);
	while(crr)
	{	
		lc++;
		if((count % 2) == 0)
		{
			if(lc == hc) 
			{
				printf("%s : Middle of LinkList : %d\n", __func__, crr->data);
				crr = crr->next;
				printf("%s : Middle of LinkList : %d\n", __func__, crr->data);
				break;
			}
		}
		else
		{
			if(lc-1 == hc)
			{
				printf("%s : Middle of LinkList : %d\n", __func__, crr->data);
				break;	
			}
		}
		crr = crr->next;
	}
	printf("%s : End\n", __func__);
}
