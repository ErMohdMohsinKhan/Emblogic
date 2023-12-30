#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* mainMenu (void* arg)
{
	int choice;
	Node *start;
	start = (Node*)arg;
	printf("%s : Begin\n", __func__);
	if(!start)
		printf("1 : Create Link List\n");
	else
	{
		printf("2 : Insert Node\n");
                printf("3 : Delete Node\n");
                printf("4 : Display Link List\n");
		printf("5 : Total number of occurences of a give item\n");
		printf("6 : Print number of non-zero elements in the list\n");
	}
	printf("0 : Exit Program\n");
	printf("%s : Enter your choice\n", __func__);
	scanf("%d", &choice);
	if ((!start) && (choice == 1))
		return (*fptr[choice+1])((void*)arg);  //CreatlinkList
	else if (choice == 0)
	{
		/*while(start->next)
		{
			sls = start;
			start = start->next;
		}
		while(start != NULL)
		{
			free(start);
			start = sls;
		}*/
		start = (Node*)arg;
		free(start);
		(*fptr[choice])((void*)"success");
	}
	else if ((start) && ((choice>=2) && (choice<=6)))
			arg = (Node*)(*fptr[choice+2])((void*)arg);
	printf("%s : End\n", __func__);
	return (void*)arg;
}
