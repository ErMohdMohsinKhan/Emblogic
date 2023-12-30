#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* creatNode (void* arg)
{
	Node *start = NULL;
	printf("%s : Begin\n", __func__);
	start = (Node*)malloc(sizeof(Node));
	if (!start)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	start->next = NULL;
	start->data = val++;
	printf("%s : End\n", __func__);
	return (void*)start;
}
