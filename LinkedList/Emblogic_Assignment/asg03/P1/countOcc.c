#include "headers.h"
#include "declarations.h"

void countOcc (Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *occ = start->next;
	int count = 0;
	int val;
	printf("%s : Enter the Value\n", __func__);
	scanf("%d", &val);
	while(occ)
	{
		if(occ->data == val)
		{
			count++;
		}
		occ = occ->next;
	}
	if(count>0)
		printf("%s : %2d Occured %d times\n", __func__, val, count);
	else
		printf("%s : No match found\n", __func__);
	printf("%s : End\n", __func__);

}
