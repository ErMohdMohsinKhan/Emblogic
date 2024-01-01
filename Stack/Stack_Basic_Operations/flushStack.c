#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* flushStack(void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Stack *stk = (Stack*)arg;
	stk->top = NULL;
	printf("%s : %s : Stack Top is set to NULL\n", __FILE__, __func__);
	printf("%s : %s : End\n", __FILE__, __func__);
	return (void*)stk;
}
