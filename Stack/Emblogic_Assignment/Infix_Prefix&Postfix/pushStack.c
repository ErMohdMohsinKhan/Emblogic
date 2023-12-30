#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int pushStack(char c)
{
       printf("%s : Begin\n", __func__);
        stk->top++;
      	printf("top : %d\n", stk->top);
        stk->skptr[stk->top] = c;
      	printf("Pushed Character is : %c\n", stk->skptr[stk->top]);
       printf("%s : End\n", __func__);
        return 0;
}
