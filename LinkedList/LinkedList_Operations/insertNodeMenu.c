#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* insertNodeMenu (void* arg)
{
	int choice;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : 1-> Insert a Node at the Beginning\n", __FILE__, __func__);
	printf("%s : %s : 2-> Insert a Node at the End\n", __FILE__, __func__);
	printf("%s : %s : 3-> Insert a Node at the nth position\n", __FILE__, __func__);
	printf("%s : %s : 4-> Insert a Node at the Key value\n", __FILE__, __func__);
	printf("%s : %s : Enter your choice\n", __FILE__, __func__);
        scanf("%d", &choice);
	if((choice >=1) && (choice <5))
		((*fptr[choice+6])(arg));
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
