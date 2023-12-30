#include "headers.h"
#include "declarations.h"

void* creatNode2 (void* arg)
{
	//Node2 *start2 = NULL;
	printf("%s : Begin\n", __func__);
	start2 = (Node2*)malloc(sizeof(Node2));
	if (!start2)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	start2->next = NULL;
	printf("%s : Enter the value\n", __func__);
	scanf("%d", &start2->data2);
	printf("%s : End\n", __func__);
	return (void*)start2;
}
