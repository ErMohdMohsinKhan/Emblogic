#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* mainMenu (void* arg)
{
	printf("%s : Begin\n", __func__);
	int choice;
	if(!arg)
        {
                printf("%s : 1 : Create a Linear Queue\n", __func__);
        }
        else
        {
                printf("%s : 2 : Insert an element in the Linear Queue\n", __func__);
                printf("%s : 3 : Remove an element in the Linear Queue\n", __func__);
                printf("%s : 4 : Display the Linear Queue\n", __func__);
                printf("%s : 5 : Clear the Linear Queue\n", __func__);
                printf("%s : 6 : Destroy the Linear Queue\n", __func__);
        }
        printf("%s : 0 : Exit the Program\n", __func__);
        scanf("%d", &choice);
        if( (choice == 1) && arg == NULL )
        {
                return (*fptr[choice])(arg);
        }
        else if( (choice >=2) && (choice<=5) )
        {
                (*fptr[choice])((void*)(arg)); //display()
        }
        else if( choice == 6 )
        {
                return (*fptr[choice])((void*)(arg));  //destroy()
        }
        else if( choice == 0 )
                exit(EXIT_SUCCESS);

	printf("%s : End\n", __func__);
	return arg;
}
