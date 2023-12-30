#include "headers.h"
#include "declarations.h"

void pushElement(Node *start, char a)
{
//	printf("%s : Begin\n", __func__);
	Node *crr = start;
	Node *new_node;
	new_node = (Node*)malloc(sizeof(Node));
        if (!new_node)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
        new_node->next = NULL;
       new_node->data = a;
	while (crr->next)
        {
        	crr = crr->next;
        }
	crr->next = new_node;
	stk->top = new_node;
	//printf("%s : Endn\n", __func__);
}
