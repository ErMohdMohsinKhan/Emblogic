#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int isEmpty()
{
//	printf("%s : Begin\n, stktop : %d\n", __func__, stk->top);
	if(stk->top == -1)
	{
		return 0;
	}
	else
        	return 1;
}
