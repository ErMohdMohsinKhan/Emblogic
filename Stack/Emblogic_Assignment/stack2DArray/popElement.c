#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* popElement (void* arg)
{
        Stack *stk;
        stk = (Stack*)arg;
        printf("%s : %s : Begin\n", __FILE__, __func__);
	int i, j, num, value;
	printf("%s : Enter the stak number in which you want to pop\n", __func__);
      	scanf("%d", &num);
        for(j=0; j<stk->nos; j++)
        {
              if(j+1 == num)
              {
		value = *(stk->skptr + (j * stk->size + stk->top[j]));
		printf("Value Popped : %d\n", value);
		*(stk->skptr + (j * stk->size + stk->top[j])) = -1;
		stk->top[j]--;
	      }
        }
        return arg;
}
