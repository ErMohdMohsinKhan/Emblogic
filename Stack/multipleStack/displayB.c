#include "headers.h"
#include "declarations.h"

void displayB()
{
	printf("%s : Begin\n", __func__);
	int i = topB;
	if(topB == MAX)
		printf("%s : Sorry! Stack'B' is Empty\n", __func__);
	else
	{
		while(i<MAX)
		{
			printf("%s : %d->%2d\n", __func__, i, stack[i]);
			i++;
		}
	}
	printf("%s : End\n", __func__);
	return;
}
