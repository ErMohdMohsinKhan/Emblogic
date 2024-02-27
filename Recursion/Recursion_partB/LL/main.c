#include "headers.h"
#include "declarations.h"

int main ()
{
	char res;
	Node *ptr = NULL;
	ptr = (Node*)malloc(sizeof(Node));
	if (!ptr)
	{
		perror("malloc");
		exit(1);
	}
	else
	{
		printf("%s : LinkedList is created successfully\n", __func__);
		ptr->data = -99;
		ptr->next = NULL;
	}
	while(1)
	{
	printf("%s : Do you want to insert node, y/n\n", __func__);
	scanf(" %c", &res);
	if(res == 'y')
	{
		printf("Going to insert Node\n");
		insertNode(ptr);
	}
	else
		break;
	}
	displayLL(ptr);
	revLL(ptr);
	return 0;
}
