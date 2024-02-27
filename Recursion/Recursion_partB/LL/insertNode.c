#include "headers.h"
#include "declarations.h"

void insertNode (Node *p)
{
	Node *crr = p;
	Node *new = (Node*)malloc(sizeof(Node));
        if (!new)
        {
                perror("malloc");
                exit(1);
        }
	else
        {
                printf("%s : Node is created successfully\n", __func__);
                printf("%s : Enter the value\n", __func__);
                scanf("%d", &new->data);
                new->next = NULL;
        }

	if(!p)
	{
		printf("%s : LinkedList does not exist\n", __func__);
		exit(1);
	}
	else
	{
		while (crr->next)
		{
			crr = crr->next;
		}
		crr->next = new;
	}
}
