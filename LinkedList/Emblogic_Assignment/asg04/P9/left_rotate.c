#include "headers.h"
#include "declarations.h"

void left_rotate(Node *start)
{
	Node *crr = start->next;
	Node *prev = start;
	int temp = crr->data;
        printf("%s : Begin\n", __func__);
	while(crr)
	{	
		prev->data = crr->data;
		prev = prev->next;
		crr = crr->next;
	}
	prev->data = temp;
        printf("%s : Begin\n", __func__);
}
