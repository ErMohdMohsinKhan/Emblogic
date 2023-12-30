#include "headers.h"
#include "declarations.h"

void median(Node *start)
{
	printf("%s : Begin\n", __func__);
	float mean = 0.0;
	int count, count_e, count_o, loop, flag;
	count = count_e = count_o = loop = flag = 0;

	Node *crr = start->next;
	while(crr)
	{
		count++;
		crr = crr->next;
	}
	crr = start->next;
	if((count%2) != 0)
	{
		count_o = (count/2);
		while((crr) && (count_o > 0)) 
		{
			crr = crr->next;
			count_o--;
		}
		printf("%s : Median->%2d\n", __func__, crr->data);
	}
	else
	{
		count_e = (count/2);
		while(crr)
		{
			loop++;
			if(loop == count_e)
			{
				mean = mean + crr->data;
				crr = crr->next;
				mean = mean + crr->data;
				flag = 1;
			}	
			if(flag != 1)
				crr = crr->next;
			else
				break;
		}
		printf("%s : Median-> %.2f\n", __func__, (mean/2));
	}
	printf("%s : End\n", __func__);
}
