#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* creatNode2 (void* arg)
{
	Node2 *start = NULL;
	printf("%s : Begin\n", __func__);
	start = (Node2*)malloc(sizeof(Node2));
	if (!start)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	start->next = NULL;
	printf("%s : Enter the value\n", __func__);
	scanf("%d", &start->data2);
	printf("%s : End\n", __func__);
	return (void*)start;
}
