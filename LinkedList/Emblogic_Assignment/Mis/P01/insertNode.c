#include "headers.h"
#include "declarations.h"

void* insertNode (void *arg)
{
	Node *new = (Node*)malloc(sizeof(Node*));
	if (!new)
	{
		perror("malloc\n");
		exit(1);
	}
	new->next = NULL;
	printf("%s : Enter value\n", __func__);
	scanf("%d", &new->data);
	Node *crr = (Node*)arg;
	while(crr->next)
	{
		crr = crr->next;
	}
	crr->next = new;
	return arg;
}
