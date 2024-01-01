#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* peekEle (void* arg)
{
	Stack *stk = (Stack*)arg;
        printf("%s : %s : Begin\n", __FILE__, __func__);
	if(stk->top)
	{
		printf("%s : %s : Element peek : %2d\n", __FILE__, __func__, stk->top->value);
	}
	else
		printf("%s : %s : No Element to peek\n", __FILE__, __func__);
        printf("%s : %s : End\n", __FILE__, __func__);
        return arg;
}
