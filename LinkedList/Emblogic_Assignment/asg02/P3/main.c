#include "headers.h"
#include "declarations.h"

int main (void)
{
	printf("%s : Begin\n", __func__);
	init();
        while(1)
        {
        printf("<<---MENU--->>\n");
        printf("1 : CreatLinkList1\n");
        printf("2 : CreatNode1\n");
        printf("3 : Display LinkList1\n");
        printf("4 : CreatLinkList2\n");
        printf("5 : CreatNode2\n");
        printf("6 : Display LinkList2\n");
       	printf("9 : Concatenate the two LinkList\n");
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
        else if ((choice == 4) && (start2 == NULL))
        {
                start2 = (*ctLL)(start2);
        }
        else if(choice == 5)
        {
                (*ctNd)(start2);
        }
        else if(choice == 6)
        {
                (*dsp)(start2);
        }
        else if(choice == 9)
        {
                (*mrg)(start, start2);
        }
	else if(choice == 0)
		exit(EXIT_SUCCESS);
	}
	printf("%s : End\n", __func__);
	return 0;
}
