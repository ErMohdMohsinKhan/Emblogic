#include "headers.h"
#include "declarations.h"

void delt(Node *start)
{
	int ed;
	int flag = 0;
	printf("%s : Begin\n", __func__);
	Node *crr, *prev;
	prev = start;
 	crr = start->next;
	printf("%s : Enter the EMPID of employee\n", __func__);
	scanf("%d", &ed);
	while(crr)
	{
		if(crr->empid == ed)
		{
			prev->next = crr->next;
			free(crr);
			flag = 1;
			break;
		}
		prev = crr;
		crr = crr->next;
	}
	if(flag == 0)
		printf("%s : Sorry!, No such EMPID exist\n", __func__);
	printf("%s : End\n", __func__);
}
