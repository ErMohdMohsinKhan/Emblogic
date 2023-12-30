#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

Stack* creatStack()
{
       	printf("%s : Begin\n", __func__);
        stk = (Stack*)malloc(sizeof(Stack));
        if(!stk)
        {
                perror("malloc");
		exit(1);
        }
	stk->size = 10;
        stk->top = -1;
	stk->skptr = (char*)malloc(sizeof(char)*stk->size);
        if(!stk->skptr)
         {
                perror("malloc");
                free(stk);
		exit(1);
        }
	printf("Stack is successfully created\n");
	printf("Stack->top : %d\n", stk->top);
        printf("%s : End\n", __func__);
        return stk;
}

