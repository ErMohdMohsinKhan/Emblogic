#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* popEle (void* arg)
{
	Stack *stk = (Stack*)arg;
	Node *tmp = NULL;
        printf("%s : %s : Begin\n", __FILE__, __func__);
	if(!stk->top)
	{
		printf("%s : %s : Stack is emptied\n", __FILE__, __func__);
		return 0;
	}
	else
	{
		tmp = stk->top;
		if(tmp->value != -99)
		{
			stk->top = stk->top->next;
			printf("%s : %s : Value at the top : %2d\n", __FILE__, __func__, tmp->value);
			free(tmp);
		}
		else
		{
			stk->top = stk->top->next;
			printf("%s : %s : No more elements to pop\n", __FILE__, __func__);
		}
	}
        printf("%s : %s : End\n", __FILE__, __func__);
        return (void*)stk;
      // return arg;
}
