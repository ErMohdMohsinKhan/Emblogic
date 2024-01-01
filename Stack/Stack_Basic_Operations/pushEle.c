#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* pushEle (void* arg)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
	Stack *stk = (Stack*)arg;
	Node * newNode = (Node*)((*fptr[9])(arg));  //creatNode()
	printf("%s : %s : Enter the Value\n", __FILE__, __func__);
	scanf("%d", &newNode->value);
	newNode->next = stk->top;
	stk->top = newNode;
        printf("%s : %s : End\n", __FILE__, __func__);
        return (void*)stk;
}
