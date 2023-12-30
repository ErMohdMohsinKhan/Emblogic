#include "headers.h"
#include "declarations.h"
Node* creatNode(Node *start)
{
        printf("%s : Begin\n", __func__);
        Node *new_node;
        Node *current = start;
	int count = arr[1];
	int num = arr[0];
	int rem;
	while(count >= 0)
	{
        	if(!current)
        	{
        		new_node = (Node*)malloc(sizeof(Node));
        		if (!new_node)
        		{
                		perror("malloc");
                		exit(EXIT_FAILURE);
        		}
        		new_node->next = NULL;
        		new_node->data = 0;
                	current = new_node;
			start = current;
        	}
        	else
        	{
			new_node = (Node*)malloc(sizeof(Node));
                	if(!new_node)
                	{
                        	perror("malloc");
                        	exit(EXIT_FAILURE);
                	}
                	new_node->next = NULL;
			rem = num%10;
                	num = num/10;
                	new_node->data = rem;

                	current->next = new_node;
			current = current->next;
        	}
		count--;
	}
        printf("%s : End\n", __func__);
        return start;
}
