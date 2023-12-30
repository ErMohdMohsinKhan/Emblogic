#include "headers.h"
#include "declarations.h"

void displayStack (Stack *start2)
{
        Stack *stk;
        stk = start2;
        int i = stk->top;
        printf("%s : %s : Begin\n", __FILE__, __func__);
        if(stk->top >= 0)
        {
                printf("\n%s : %s : Reversing the LinkList : \n\n", __FILE__, __func__);
                for(i; i>=0; i--)
                {
                        printf("%s : %s : %2d->%3d\n", __FILE__, __func__, i, stk->skptr[i]);
                }
        }
        else
                printf("%s : %s : No more elements to be displayed\n", __FILE__, __func__);
        printf("%s : %s : End\n", __FILE__, __func__);
}

