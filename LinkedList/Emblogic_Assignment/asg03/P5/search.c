#include "headers.h"
#include "declarations.h"

void search(Node *start)
{
	int emp;
        printf("%s : Begin\n", __func__);
	Node *src = start->next;
	printf("%s : Enter empid to search\n", __func__);
	scanf("%d", &emp);
	while(src)
	{
		if(src->empid == emp)
		{
			printf("%2d\t%s\t%s\t%.2f\n", src->empid, src->dept, src->ename, src->salary);
			break;
		}
		src = src->next;
	}
        printf("%s : End\n", __func__);
}
