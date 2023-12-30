#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int popStack()
{
//	printf("%s : Begin\n", __func__);
	printf("%s : Previous top : %c\n", __func__, stk->skptr[stk->top]);
	if(stk->skptr[stk->top] != '(') // || stk->skptr[stk->top] != '[' || stk->skptr[stk->top] != '{')
	{
		op[a++] = stk->skptr[stk->top];
	}
	stk->top--;
	printf("%s : Updated top : %c\n", __func__, stk->skptr[stk->top]);
	printf("%s : Updated top : %d\n", __func__, stk->top);
	/*if(stk->skptr[stk->top] != '(')
	{
		stk->top--;
	}
	printf("Updated top : %c\n", stk->skptr[stk->top]);
	printf("Updated top : %d\n", stk->top);
*/	printf("%s : End\n", __func__);
	return 0;
}
