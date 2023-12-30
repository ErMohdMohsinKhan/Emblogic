#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertMenu (void* arg)
{
	int choice;
	Node *start;
	start = (Node*)arg;
	printf("%s : Begin\n", __func__);
	printf("1 : Insert Node at the Beginning\n");
        printf("2 : Insert Node at the End\n");
        printf("3 : Insert Node at the Nth Position\n");
	printf("4 : Insert Node at the Key Value\n");
	printf("%s : Enter your choice\n", __func__);
	scanf("%d", &choice);
	if ((choice >= 1) && (choice<=4))
		 (*fptr[choice+9])((void*)arg);  //CreatlinkList
	/*else if (choice == 0)
		(*fptr[choice])((void*)"success");
	else if ((start) && ((choice>=2) && (choice<=4)))
			arg = (Node*)(*fptr[choice+2])((void*)arg);  */
	printf("%s : End\n", __func__);
	return (void*)arg;
}
