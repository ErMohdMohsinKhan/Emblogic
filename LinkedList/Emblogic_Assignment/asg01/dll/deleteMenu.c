#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* deleteMenu (void* arg)
{
	int choice;
	Node *start;
	start = (Node*)arg;
	printf("%s : Begin\n", __func__);
	printf("1 : Delete Node from the Beginning\n");
        printf("2 : Delete Node from the End\n");
        printf("3 : Delete Node from the Nth Position\n");
	printf("4 : Delete Node from the Key Value\n");
	printf("%s : Enter your choice\n", __func__);
	scanf("%d", &choice);
	if ((choice >= 1) && (choice<=4))
		 (*fptr[choice+12])((void*)arg);  //delete()--
	printf("%s : End\n", __func__);
	return (void*)arg;
}
