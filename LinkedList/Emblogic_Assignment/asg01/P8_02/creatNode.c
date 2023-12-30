#include "headers.h"
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
	printf("%s : Enter the value\n", __func__);
	scanf("%d", &start->data);
	printf("%s : End\n", __func__);
	return (void*)start;
}
