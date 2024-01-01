#include "headers.h"
#include "declarations.h"

void pushB()
{
	if(topB == topA+1)
	{
		printf("%s : Stack'B' is OverFlow\n", __func__);
	}
	else
	{
        	topB--;
        	printf("%s : Enter value to enter in Stack'B'\n", __func__);
        	scanf("%d", &stack[topB]);
	}
	return;
}
