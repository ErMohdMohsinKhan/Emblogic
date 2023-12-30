#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* creatStack (void* arg)
{
	int i, j;
        printf("%s : %s : Begin\n", __FILE__, __func__);
        Stack *stack;
        stack = (Stack*)malloc(sizeof(Stack));
        if(!stack)
        {
                perror("malloc");
                (*fptr[0])((void*)"success");
        }
        printf("%s : %s : Enter the Number of Stack\n", __FILE__, __func__);
        scanf("%d", &stack->nos);
        printf("%s : %s : Enter the size of Stack\n", __FILE__, __func__);
        scanf("%d", &stack->size);
        //stack->top = -1;
        stack->skptr = (int*)malloc(sizeof(int)*((stack->size)*(stack->nos)));
        if(!stack->skptr)
         {
                perror("malloc");
                free(stack);
                (*fptr[0])((void*)"success");
        }
	stack->top = (int*)malloc(sizeof(int) * stack->nos);
if (!stack->top) {
    perror("malloc");
    free(stack->skptr);
    free(stack);
    (*fptr[0])((void*)"success");
}

/*for (int i = 0; i < stack->nos; i++) {
    stack->top[i] = -1; // Initialize each top to -1
}
*/
//	printf("Nos : %d\n", stack->nos);	
/*	while(sz>=0)
	{
		sz = -1;
		printf("Row : %d\n", sz);
		//stack->nos--;
		sz--;
	}*/
	for (i = 0; i < stack->nos; i++) 
	{
		stack->top[i] = -1;
		for(j=0; j<stack->size; j++)
		{
    			stack->skptr[i * stack->size + j] = -1;
		}
	}

        printf("%s : %s : End\n", __FILE__, __func__);
        return (void*)stack;
}
