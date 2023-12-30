#include "headers.h"
#include "declarations.h"

void popElement (Stack* start2)
{
        Stack *stk;
        stk = start2;
        printf("%s : %s : Begin\n", __FILE__, __func__);
	while(stk->size >= 1)
	{
        if (stk->top >= 0)
        {
                stk->skptr[stk->top] = '\0';
                stk->top--;
        }
        else
                printf("%s : %s : No more elements to be Popped\n", __FILE__, __func__);
	}
        printf("%s : %s : End\n", __FILE__, __func__);
	(*dpSk)(start2);
}

