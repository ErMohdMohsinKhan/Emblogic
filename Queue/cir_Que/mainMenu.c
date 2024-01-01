#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* mainMenu(void* arg)
{
	int choice;
	printf("%s : Begin\n", __func__);
	if(!arg)
	{
		printf("%s : 1 : Create a Circular Queue\n", __func__);
	}
	else
	{
		printf("%s : 2 : Insert an element in the Circular Queue\n", __func__);
		printf("%s : 3 : Remove an element in the Circular Queue\n", __func__);
		printf("%s : 4 : Display the Circular Queue\n", __func__);
	}
	printf("%s : 0 : Exit the Program\n", __func__);
	scanf("%d", &choice);
	if( (choice == 1) && arg == NULL )
	{
		return (*fptr[choice])(arg);
	}
	else if( choice == 2 )
	{
		(*fptr[choice])((void*)arg);  //enque()
	}
	else if( choice == 3 )
	{
		(*fptr[choice])((void*)(arg));  //deque()
	}
	else if( choice == 4 )
	{
		(*fptr[choice])((void*)(arg)); //display()
	}
	else if( choice == 0 )
		exit(EXIT_SUCCESS);
	printf("%s : End\n", __func__);
	return arg;
}
