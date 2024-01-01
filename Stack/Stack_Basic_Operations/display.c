#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* display (void* arg)
{
	Stack *tmp = (Stack*)arg;
	Node *saved_top = tmp->top; // Store the original top pointer
	Stack *stk = (Stack*)arg;
        printf("%s : %s : Begin\n", __FILE__, __func__);
	if(stk->top)
	{
		while(stk->top != NULL)
		{
			if(stk->top->value != -99)
			{
				printf("%s : %s : Value->%2d\n", __FILE__, __func__, stk->top->value);
			}
			stk->top = stk->top->next;
		}
	}
	else
		printf("%s : %s : No more Elements to display\n", __FILE__, __func__);
        printf("%s : %s : End\n", __FILE__, __func__);
	tmp->top = saved_top; // Restore the top pointer so that Now stack top points to the starting Node
        return (void*)tmp;
}
