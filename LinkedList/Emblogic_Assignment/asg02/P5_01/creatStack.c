#include "headers.h"
#include "declarations.h"

void creatStack (Stack *start2)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        Stack *stack;
        stack = (Stack*)malloc(sizeof(Stack));
        if(!stack)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
        printf("%s : %s : Enter the size of Stack\n", __FILE__, __func__);
        scanf("%d", &stack->size);
        stack->top = -1;
        stack->skptr = (int*)malloc(sizeof(int)*stack->size);
        if(!stack->skptr)
         {
                perror("malloc");
                free(stack);
                exit(EXIT_FAILURE);
        }
        printf("%s : %s : End\n", __FILE__, __func__);
	(*psEl)(stack);
//	(*dpSk)(start2);
}

