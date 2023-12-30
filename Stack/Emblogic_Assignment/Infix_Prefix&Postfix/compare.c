#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int compare(char a)
{
	int ret;
	printf("%s : Begin\n", __func__);
	if ((stk->skptr[stk->top] == '+' || stk->skptr[stk->top] == '-') && ((a == '*') || (a == '/')))
	{
		return 1;
	}
	else if((stk->skptr[stk->top] == '/') || (stk->skptr[stk->top] == '*')  && ((a == '-') || (a == '+')))
	{
		ret = popStack();
		return 1;
	}
	else if((stk->skptr[stk->top] == '*') && (a == '/'))
	{
		ret = popStack();
		return 1;
	}
	else if(stk->skptr[stk->top] == '(')
		return 1;
	else
		return 0;
	printf("%s : End\n", __func__);
}
