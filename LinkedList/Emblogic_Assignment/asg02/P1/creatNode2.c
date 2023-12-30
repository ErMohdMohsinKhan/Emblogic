#include "headers.h"
#include "declarations.h"
Node* creatNode2(Node *start, Node *start2)
{
	printf("%s : Begin\n", __func__);
	Node *new_node, *crr_ptr;
        Node *current = start;
	crr_ptr = start2;
	if(!start2)
        {
		new_node = (Node*)malloc(sizeof(Node));
        	if (!new_node)
        	{
                	perror("malloc");
                	exit(EXIT_FAILURE);
        	}
        	new_node->next = NULL;
		new_node->data = 0;
		start2 = new_node;
		crr_ptr = new_node;
        }
	while(current->next)
	{
		new_node = (Node*)malloc(sizeof(Node));
        	if (!new_node)
        	{
                	perror("malloc");
                	exit(EXIT_FAILURE);
        	}
		current = current->next;  //Advancing LL 1
		crr_ptr->next = new_node;  //Assigning new node to LL 2
		crr_ptr = crr_ptr->next;  //Advancing LL 2
		crr_ptr->data = current->data;  //copying data
		crr_ptr->next = NULL;  //If it is last, then NULL
	}
	printf("%s : LinkList is copied successfully\n", __func__);
	printf("%s : End\n", __func__);
	return start2;
}

