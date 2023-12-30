#include "headers.h"
#include "declarations.h"

void pushElement(Stack* start2, Node* start)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        Stack *stk;
        stk = start2;
	Node *stp;
	stp = start->next;
	while((stk->size >= 1) && (stp != NULL))
	{
                stk->top++;
		stk->skptr[stk->top] = stp->data;
		stp = stp->next;
		stk->size--;
        }
        printf("%s : %s : End\n", __FILE__, __func__);
	(*ppEl)(start2);
}

