#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* pushElement (void* arg)
{
	Stack *stk;
	stk = (Stack*)arg;
        printf("%s : %s : Begin\n", __FILE__, __func__);
//	printf("%s : Enter the stak number in which you want to insert\n", __func__);
//	scanf("%d", &num);
	int i, j;
	for(j=0; j<stk->nos; j++)
	{
		printf("This is Stack no : %d\n", (j+1));
		printf("Stack top : %d\n", stk->top[j]);
	//	if(j+1 == num)
	//	{
			for(i=0; i<stk->size; i++)
			{
				stk->top[j]++; // Update the top of the selected stack
				//stk[nos->top]++;
				 if (stk->top[j] > stk->size - 1)
            			{
                			printf("Stack is full. Cannot insert more elements.\n");
                			break; // Exit the loop for the current stack
            			}
				printf("This is Stack col : %d\n", i+1);
				printf("%s : Enter the value : \n", __func__);
				scanf("%d", (stk->skptr + (j * stk->size + stk->top[j]))); // Insert element at the top of the stack

			}
	}
        printf("%s : %s : End\n", __FILE__, __func__);
        return 0;
}
