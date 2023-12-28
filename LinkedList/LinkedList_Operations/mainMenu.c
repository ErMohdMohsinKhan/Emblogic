#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
void* mainMenu(void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : <<<*** MAIN_MENU ***>>>\n", __FILE__, __func__);
	int choice;
	if(!arg)
		printf("%s : %s :  1-> 	Create a Linkedlist\n", __FILE__, __func__);
	else
	{
		printf("%s : %s :  2-> 	Insert a Node\n", __FILE__, __func__);
		printf("%s : %s :  3-> 	Delete a Node\n", __FILE__, __func__);
		printf("%s : %s :  4-> 	Display the Linkedlist\n", __FILE__, __func__);
		printf("%s : %s :  5-> 	Sort the Linkedlist in Ascending Order\n", __FILE__, __func__);
		printf("%s : %s :  6-> 	Sort the Linkedlist in Descending Order\n", __FILE__, __func__);
		printf("%s : %s :  7-> 	Find the smallest element in the Linkedlist\n", __FILE__, __func__);
		printf("%s : %s :  8-> 	Find the largest element in the Linkedlist\n", __FILE__, __func__);
		printf("%s : %s :  9-> 	Print the nth element from the end of the Linkedlist in a single pass\n", __FILE__, __func__);
		printf("%s : %s :  10->   Reverse the Linkedlist\n", __FILE__, __func__);
		printf("%s : %s :  11->   Convert into a Circular Linkedlist\n", __FILE__, __func__);
	}
	printf("%s : %s :  0-> 	Exit the Program\n", __FILE__, __func__);
	printf("%s : %s :  Enter your choice\n", __FILE__, __func__);
	scanf("%d", &choice);
	printf("%s : %s :  Choice entered : %d\n", __FILE__, __func__, choice);
	if(choice == 0)
		(*fptr[0])((void*)"success");  //exitProg()
	else if(choice == 1)
		return (*fptr[choice+1])(arg);
	else if((choice > 1) && (choice <= 4))
		(*fptr[choice+1])(arg);
	else if ((choice > 4) && (choice <=11))
		(*fptr[choice+10])(arg);

	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
