#include "headers.h"
#include "declarations.h"
Node* creatNode(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *new_node;
        Node *current;
        new_node = (Node*)malloc(sizeof(Node));
        if (!new_node)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
        new_node->next = NULL;
        printf("%s : Enter the value\n", __func__);
        scanf("%d", &new_node->data);
        if(!start)
        {
                start = new_node;
        }
        else
        {
                current = start;
                while(current->next)
                {
                        current = current->next;
                }
                current->next = new_node;
        }
	printf("%s : End\n", __func__);
	(*stll)(start);
        return start;
}
