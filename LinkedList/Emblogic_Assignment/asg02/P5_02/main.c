#include "headers.h"
#include "declarations.h"

int main (void)
{
        printf("%s : Begin\n", __func__);
        init();
	int count;
        while(1)
        {
        printf("<<---MENU--->>\n");
        printf("1 : CreatLinkList\n");
        printf("2 : CreatNode\n");
        printf("3 : Display LinkList\n");
        printf("4 : Reverse the LinkList\n");
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
               count = (*dsp)(start);
	       printf("Count : %d\n", count);
        }
	else if(choice == 4)
	{
		(*ctSk) (start2, start, count);//
	}
	else if(choice == 0)
	{
		exit(EXIT_SUCCESS);
	}
	}
   	printf("%s : End\n", __func__);
        return 0;
}
