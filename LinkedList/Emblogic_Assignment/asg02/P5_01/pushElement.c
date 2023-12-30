#include "headers.h"
#include "declarations.h"

void pushElement(Stack* start2)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        Stack *stk;
        stk = start2;
	printf("%s : Stack Size : %d\n", __func__, stk->size);
	while(stk->size >= 1)
	{
        if((stk != NULL) && (stk->top != ((stk->size)-1)))
        {
                stk->top++;
                printf("%s : %s : Enter the value\n", __FILE__, __func__);
                scanf("%d", &stk->skptr[stk->top]);
                printf("Element entered : %d\n", stk->skptr[stk->top]);
		stk->size--;
        }
        else
        {
                printf("%s : %s : ERROR->Stack Overflow\n", __FILE__, __func__);
        }
	}
        printf("%s : %s : End\n", __FILE__, __func__);
	(*ppEl)(start2);
}

