#include "headers.h"
#include "declarations.h"

Node* creatStack(Node *start)
{
	printf("%s : Begin\n", __func__);
	stk = (Stack*)malloc(sizeof(Stack));
	if(!stk)
	{
		perror("malloc");
		exit(1);
	}
	stk->top = NULL;
	//printf("%s : Enter the size of the Stack\n", __func__);
	//scanf("%d", &stk->size);
	Node *new_node;
        new_node = (Node*)malloc(sizeof(Node));
        if (!new_node)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
        new_node->next = NULL;
	new_node->data = '\0';
	stk->top = new_node;
	start = new_node;
	return start;
	printf("%s : End\n", __func__);
}
