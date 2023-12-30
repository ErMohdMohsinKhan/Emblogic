#include "headers.h"
#include "declarations.h"

Node* mainMenu (Node *start)
{
        printf("%s : Begin\n", __func__);
	
	printf("<<---MENU--->>\n");
	if(!start)
       		printf("1 : Create a Table\n");
	else
	{
        printf("2 : Add a record\n");
        printf("3 : Display all the records\n");
        printf("4 : Search details of an employee\n");
        printf("5 : Enter the empid to delete its entry\n");
	}
        printf("0 : Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        if ((choice == 1) && (start == NULL))
        {
                start = (*ctLL)(start);
        }
        else if(choice == 2)
        {
                (*ctNd)(start);
        }
        else if(choice == 3)
        {
                (*dsp)(start);
        }
        else if(choice == 4)
        {
                (*sch)(start);
        }
        else if(choice == 5)
        {
                (*del)(start);
        }
        else if(choice == 0)
                exit(EXIT_SUCCESS);
	return start;
}
