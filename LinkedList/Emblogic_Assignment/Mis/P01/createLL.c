#include "headers.h"
#include "declarations.h"

void* createLL(void *arg) 
{
	Node *LL = NULL;
	LL = (Node*)arg;
	if (!LL)
	{
		LL = (Node*)malloc(sizeof(Node*));
		if(!LL)
		{
			perror("malloc\n");
			exit(1);
		}
		LL->next = NULL;
		LL->data = -99;
		printf("%s : LL is created\n", __func__);
	}
	else
		printf("%s : LL is already created\n", __func__);
	return (void*)LL;
}
