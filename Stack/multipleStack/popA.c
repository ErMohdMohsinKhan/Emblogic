#include "headers.h"
#include "declarations.h"

int popA()
{
	if(topA == -1)
	{
		printf("%s : Stack'A' is UnderFlow\n", __func__);
	}
	else
	{
		val = stack[topA];
		//printf("%s : Value-> %2d\n", __func__, stack[topA]);
		topA--;
	}
	return val;
}
