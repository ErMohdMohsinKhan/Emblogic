#include "headers.h"
#include "declarations.h"

void delFo(Node *start)
{
	int val, flag;
	printf("%s : Begin\n", __func__);
	Node *del, *sdel;
	sdel = start;
	del = start->next;
	printf("%s : Enter the value\n", __func__);
	scanf("%d", &val);
	while(del)
	{
		flag = 0;
		if(del->data == val)
		{
			sdel->next = del->next;
			free(del);
			printf("%s : %2d is deleted\n", __func__, val);
			flag = 1;
			break;
		}
		sdel = sdel->next;
		del = del->next;

	}
	if(flag != 1)
		printf("%s : No match is found\n", __func__);
	printf("%s : End\n", __func__);
}
