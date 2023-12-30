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
	count++;
	printf("%s : Count->%d\n", __func__, count);
        printf("%s : Enter the value\n", __func__);
        scanf("%d", &new_node->data);
        if(!start)
        {
                start = new_node;
		count--;
		printf("%s : Count->%d\n", __func__, count);
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
        return start;
}
