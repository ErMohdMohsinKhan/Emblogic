#include "headers.h"
#include "declarations.h"

int maxm(Node *start)
{
	printf("%s : Begin\n", __func__);
	int tmp;
	Node *stp;
	if(start)
	{
	stp = start->next;
	if(stp)
	{
		tmp = stp->data;
	}
	else
	{
		printf("%s : LinkedList exist but no node exist\n", __func__);
		return 0;
	}
	}
	else
	{
		printf("%s : LinkedList does not exist\n", __func__);
		return 0;
	}
	while(stp->next)
	{
		stp = stp->next;
		if(tmp < stp->data)
		{
			tmp = stp->data;
		}
	}
	printf("%s : Minimum value->%2d\n", __func__, tmp);
	printf("%s : End\n", __func__);
	return 0;
}
