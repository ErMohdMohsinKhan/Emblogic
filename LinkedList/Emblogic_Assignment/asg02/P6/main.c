#include "headers.h"
#include "declarations.h"

int main (void)
{
        printf("%s : Begin\n", __func__);
        init();
        while(1)
        {
        printf("<<---MENU--->>\n");
        printf("1 : Enter the number\n");
        printf("2 : CreatLinkList1\n");
        printf("3 : Display LinkList1\n");
        printf("0 : Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        if ((choice == 2) && (start == NULL))
        {
                start = (*ctLL)(start);
        }
	else if(choice == 1)
	{
		(*gtNo)();
	}
    /*    else if(choice == 3)
        {
                (*ctNd)(start);
        } */
        else if(choice == 3)
        {
                (*dsp)(start);
        }
	 else if(choice == 0)
                exit(EXIT_SUCCESS);
        }
        printf("%s : End\n", __func__);
        return 0;
}
