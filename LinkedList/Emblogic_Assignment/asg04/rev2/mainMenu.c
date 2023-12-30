#include "headers.h"
#include "declarations.h"

Node* mainMenu (Node *start)
{
        printf("%s : Begin\n", __func__);
	Node *revl = NULL;
        printf("<<---MENU--->>\n");
        if(!start)
                printf("1 : Create LinkList\n");
        else
        {
        printf("2 : Insert a Node\n");
        printf("3 : Display the LinkList\n");
        printf("4 : Reversing\n");
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
		revl = (*rev)(start);
	 	Node *dsp = revl;
        	printf("%s : Begin\n", __func__);
       	 	while(dsp->next != NULL)
        	{
                	printf("%2d\n",  dsp->data);
                	dsp = dsp->next;
        	}
        }
        else if(choice == 0)
                exit(EXIT_SUCCESS);
        return start;
}
