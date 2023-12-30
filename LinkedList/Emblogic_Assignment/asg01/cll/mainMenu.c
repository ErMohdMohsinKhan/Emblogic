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
                printf("3 : Display Link List\n");
                printf("4 : Copy the Circular Link List\n");
        }
        printf("0 : Exit Program\n");
        printf("%s : Enter your choice\n", __func__);
        scanf("%d", &choice);
        if ((!start) && (choice == 1))
                return (*fptr[choice+1])((void*)arg);  //CreatlinkList
        else if (choice == 0)
        {
		start = (Node*)arg;
                free(start);
	//	(*fptr[6])(0);
                (*fptr[choice])((void*)"success");
        }
        else if ((start) && ((choice>=2) && (choice<=3)))
                        arg = (Node*)(*fptr[choice+2])((void*)arg);
	else if (choice == 4)
	{
		(Node*)(*fptr[choice+2])(arg);
	}
        printf("%s : End\n", __func__);
        return (void*)arg;
}
