#include "headers.h"
#include "declarations.h"

void pushA()
{
	if(topA+1 == topB)
	{
		printf("%s : Stack'A' is OverFlow\n", __func__);
	}
	else
	{
		topA++;
		printf("%s : Enter value to enter in Stack'A'\n", __func__);
		scanf("%d", &stack[topA]);
	}
	return;
}
