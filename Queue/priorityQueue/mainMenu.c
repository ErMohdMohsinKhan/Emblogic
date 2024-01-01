#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* mainMenu(void *arg)
{
	int choice;
	PQueue *pq = (PQueue*)arg;
	printf("%s : Begin\n", __func__);
	printf("%s : << MENU >>\n", __func__);
	if(!pq)
	{
		printf("%s : 1--> Create a Priority Queue\n", __func__);
	}
	else
	{
		printf("%s : 2--> Enqueue\n", __func__);
		printf("%s : 3--> Dequeue\n", __func__);
		printf("%s : 4--> Display\n", __func__);
		printf("%s : 5--> Destroy the Priority Queue\n", __func__);
	}
	printf("%s : 0--> Exit the Program\n", __func__);
	scanf("%d", &choice);
	if (choice == 0)
		(*fptr[choice])((void*)"success");
	else if (choice == 1)
		return (*fptr[choice+1]) ((void*)arg);
	else if (choice >= 2 && choice <= 5)
		arg = (*fptr[choice+1])((void*)arg);
	printf("%s : End\n", __func__);
	return arg;
}
