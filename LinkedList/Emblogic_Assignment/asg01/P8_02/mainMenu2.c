#include "headers.h"
#include "declarations.h"

void* mainMenu2 (void* arg)
{
        int choice;
        Node2 *start2;
        start2 = (Node2*)arg;
        printf("%s : Begin\n", __func__);
        if(!start2)
                printf("1 : Create another Link List\n");
	else
        {
                printf("2 : Insert Node in LL2\n");
                printf("3 : Delete Node in LL2\n");
                printf("4 : Display Link List LL2\n");
	}
	printf("%s : Enter your choice\n", __func__);
        scanf("%d", &choice);
	 if ((!start2) && (choice == 1))
                return (*fptr[choice+16])((void*)arg);  //CreatlinkList2
	else if ((start2) && ((choice>=2) && (choice<=4)))
                        arg = (Node2*)(*fptr[choice+16])((void*)arg);
	 printf("%s : End\n", __func__);
        return (void*)arg;
}



