#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* rev (void* arg)
{
	Node *start = (Node *)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *tmp = NULL;
	Node *crr = start;
	Node *prev = NULL;
	while(crr != NULL)
	{
		tmp = crr->next;
		crr->next = prev;
		prev = crr;
		crr = tmp;
	}
	printf("%s : %s : Linkedlist is reversed successfully\n", __FILE__, __func__);
	((*fptr[5])((void*)prev));
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
