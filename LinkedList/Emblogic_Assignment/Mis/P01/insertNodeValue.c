#include "headers.h"
#include "declarations.h"

void* insertNodeValue (void *arg)
{
	Node *new = (Node*)malloc(sizeof(Node*));
	if (!new)
	{
		perror("malloc\n");
		exit(1);
	}
	new->next = NULL;
	int value = ((struct nodee*)arg)->val;
	new->data = value;
	struct node *crr = (struct node*)arg;
	while(crr->next)
	{
		crr = crr->next;
	}
	crr->next = new;
	return arg;
}
