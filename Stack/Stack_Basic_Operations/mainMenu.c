#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
void* mainMenu(void* arg)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        printf("%s : %s : <<<*** MAIN_MENU ***>>>\n", __FILE__, __func__);
        int choice;
        if(!arg)
                printf("%s : %s :  1->  Create a Stak\n", __FILE__, __func__);
        else
        {
		printf("%s : %s :  2->  Push Element into the Stack\n", __FILE__, __func__);
		printf("%s : %s :  3->  Pop Element from the Stack\n", __FILE__, __func__);
		printf("%s : %s :  4->  Peek Element from the Stack\n", __FILE__, __func__);
		printf("%s : %s :  5->  Display all Elements of the Stack\n", __FILE__, __func__);
		printf("%s : %s :  6->  Flush the Stack\n", __FILE__, __func__);
		printf("%s : %s :  7->  Destroy the Stack\n", __FILE__, __func__);
	}
        printf("%s : %s :  0->  Exit the Program\n", __FILE__, __func__);
        printf("%s : %s :  Enter your choice\n", __FILE__, __func__);
        scanf("%d", &choice);
	printf("%s : %s :  Choice entered : %d\n", __FILE__, __func__, choice);
	if(choice == 0)
                (*fptr[0])((void*)"success");  //exitProg()
        else if(choice == 1 || choice == 7) 
                return (*fptr[choice+1])(arg);
	else if((choice > 1) && (choice <= 6))
                (*fptr[choice+1])(arg);
	printf("%s : %s : End\n", __FILE__, __func__);
        return arg;
}
