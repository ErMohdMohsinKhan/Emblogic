#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* deleteNodeNp (void* arg)
{
	Node *start = (Node*)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	int pos;
	int c;
	printf("%s : %s : Enter the nth position where you want to delete a node\n", __FILE__, __func__);
	scanf("%d", &pos);
	Node *crr = start;
	Node *prev = start;
	for(c=0; c<pos; c++)	
	{
		prev = crr;
		crr = crr->next;

	}
	prev->next = crr->next;
	printf("%s : %s : Node is deleted successfully at %d position\n", __FILE__, __func__, pos);
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
