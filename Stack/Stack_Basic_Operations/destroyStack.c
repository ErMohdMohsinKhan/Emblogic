#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* destroyStack(void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Stack *stk = (Stack*)arg;
	free(stk->top);
	stk->top = NULL;
	free(stk);
	stk = NULL;
	printf("%s : %s : Stack is destroyed\n", __FILE__, __func__);
	printf("%s : %s : End\n", __FILE__, __func__);
	return (void*)stk;
}
