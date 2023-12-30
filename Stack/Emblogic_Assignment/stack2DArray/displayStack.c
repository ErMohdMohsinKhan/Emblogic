#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* displayStack (void* arg)
{
        Stack *stk;
        stk = (Stack*)arg;
        int i, j;
        printf("%s : %s : Begin\n", __FILE__, __func__);
	for (int j = 0; j < stk->nos; j++)
	{
        	printf("<<Stack no: %d>>\n", j + 1);

        	for (int i = 0; i < stk->size; i++) 
		{
            		int index = j * stk->size + i;

            		if (i <= stk->top[j])
			{
                		printf("%s : Value : %d\n", __func__, stk->skptr[index]);
            		}
			else
			{
                		printf("%s : Value : -1\n", __func__);
            		}
        	}
    }
        return arg;
}
