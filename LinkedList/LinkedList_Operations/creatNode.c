#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* creatNode(void* arg)
{
	Node *new = NULL;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	if(!arg)
	{
		new = (Node*)malloc(sizeof(Node));
		if(!new)
		{
			perror("malloc");
			(*fptr[0])((void*)"failure");
		}
		new->next = NULL;
		new->value = -99;
		return (void*)new;
	}
	else
	{
		new = (Node*)malloc(sizeof(Node));
                if(!new)
                {
                        perror("malloc");
                        (*fptr[0])((void*)"failure");
                }
                new->next = NULL;
		printf("%s : %s : Enter the value\n", __FILE__, __func__);
		scanf("%d", &new->value);
		return (void*)new;
	}
	printf("%s : %s : End\n", __FILE__, __func__);
}
