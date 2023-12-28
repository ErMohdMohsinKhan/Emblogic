#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* insertNodeNp (void* arg)
{
	int pos;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start = (Node*)arg;
	Node *crr = start;
	Node *prev = start;
	printf("%s : %s : Enter the nth Position\n", __FILE__, __func__);
	scanf("%d", &pos);
	while(!(pos<0))
	{
		prev = crr;
		crr = crr->next;
		pos--;
	}
	Node *new = (Node*)((*fptr[6])(arg));  //creatNode()
	new->next = prev->next;
	prev->next = new;
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
