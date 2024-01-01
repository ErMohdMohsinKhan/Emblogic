#include "headers.h"
#include "declarations.h"

void displayA()
{
	int i = topA;
	if(topA == -1)
		printf("%s : Sorry! Stack'A' is Empty\n", __func__);
	else
	{
		while(i>=0)
		{
			printf("%s : %d->%2d\n", __func__, i, stack[i]);
			i--;
		}
	}
	return;
}
