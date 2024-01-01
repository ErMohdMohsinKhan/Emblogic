#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
/*Insert a Node at the End*/
void* enqueue (void* arg)
{
	printf("%s : Begin\n", __func__);
	Node *n = (Node*)arg;	
	if(!n)
	{
		n = (Node*)malloc(sizeof(Node));
		if(!n)
		{
			perror("malloc");
			exit(1);
		}
		Queue *q = (Queue*)malloc(sizeof(Queue));
		if(!q)
		{
			perror("malloc");
			exit(1);
		}
		q->front  = q->rear = n;
		n->next = NULL;
		n->data = -99;
		return (void*)n;
	}
	else
	{
		Queue *q = (Queue*)arg;
	        Node *new = NULL;
                new = (Node*)malloc(sizeof(Node));
                if(!new)
                {
                        perror("malloc");
                        exit(1);
                }
		printf("%s : Enter value\n", __func__);
		scanf("%d", &new->data);
		new->next = n->next; //Link the Linkedlist
		n->next = new;  //Linking the start node with newly created node
		n = new; //Advancing to the newly created node so that rear can be pointed here
		q->rear = new;
	}
	printf("%s : End\n", __func__);
	return arg;
}
