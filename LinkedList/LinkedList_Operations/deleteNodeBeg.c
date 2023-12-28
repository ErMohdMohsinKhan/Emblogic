#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* deleteNodeBeg (void* arg)
{
	Node *start = (Node*)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *crr = start;
	Node *tmp = start->next;
	crr->next = tmp->next;
	free(tmp);
	tmp = NULL;
	printf("%s : %s : A node is removed successfully from Begin\n", __FILE__, __func__);
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
