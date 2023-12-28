#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* deleteNodeEnd (void* arg)
{
	Node *start = (Node*)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *crr = start;
	Node *prev = start;
	while(crr->next)
	{
		prev = crr;
		crr = crr->next;
	}
	free(prev->next);
	prev->next = NULL;
	printf("%s : %s : A node is removed successfully from LAST\n", __FILE__, __func__);
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
