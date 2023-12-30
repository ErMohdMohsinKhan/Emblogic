#include "headers.h"
#include "declarations.h"

void right_rotate(Node *start)
{
	Node *crr = start->next;
	Node *prev = start;
	int temp;
        printf("%s : Begin\n", __func__);
	while(crr->next)
	{	
		prev = prev->next;
		crr = crr->next;
	}
	temp = crr->data;
	prev->next = NULL; //Making second last Node as Last Node;
	crr->next = start->next; //Adding Previous First node's address to the orginal last node
	start->next = crr;  //Setting address of last Node to First Node
        printf("%s : Begin\n", __func__);
}
