#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* creatStack(void* arg)
{
        Stack *stk = (void*)arg;
	Node *newNode = NULL;
        printf("%s : %s : Begin start\n", __FILE__, __func__);
        if(arg)
        {
                printf("%s : %s : Stack is already created\n", __FILE__, __func__);
        }
        else
        {
		stk = (Stack*)malloc(sizeof(Stack));
		if(!stk)
		{
			perror("malloc");
			((*fptr[0])((void*)"failure"));
		}
                newNode = (Node*)((*fptr[9])(arg));  //creatNode()
		newNode->value = -99;
		newNode->next = stk->top;
		stk->top = newNode;
                printf("%s : %s : Stack is created successfully\n", __FILE__, __func__);
                return (void*)stk;
        }
        printf("%s : %s : End\n", __FILE__, __func__);
        return arg;
}
