#include "headers.h"
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
        /*        printf("5 : Create another Link List\n");
		printf("6 : Insert Node in LL2\n");
                printf("7 : Delete Node in LL2\n");
                printf("8 : Display Link List2\n");
                printf("9 : Merge Link List\n");  */
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
		//free(start);
		(*fptr[choice])((void*)"success");
	}
	else if ((start) && ((choice>=2) && (choice<=4)))
			arg = (Node*)(*fptr[choice+2])((void*)arg);
/*	else
	{
	if (choice==5)
	{
		Node2* start2 = NULL;
		start2 = (Node2*)(*fptr[choice+12])(start2);
		printf("start2 : %p\n", (void*)start2);
	}
	else if ((start2) && ((choice>=6) && (choice<=9)))
	{
			start2 = (Node2*)(*fptr[choice+12])((void*)start2);
			printf("start2 : %p\n", (void*)start2);
	}
	}*/
	printf("%s : End\n", __func__);
	return (void*)arg;
}
