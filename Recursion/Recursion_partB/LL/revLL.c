#include "headers.h"
#include "declarations.h"

Node* revLL (Node *head)
{
	Node *newHead = NULL;
	Node *headNext = NULL;
	if ( (head == NULL) || (head->next == NULL) ) 
		return head;
	else
	{
		newHead = revLL(head->next);
		headNext = head->next;
		headNext->next = head;
		head->next = NULL;
		return newHead;
	}

	Node *crr = newHead;
	while(crr)
	{
		printf("%s : Value-> %d\n", __func__, crr->data);
		crr = crr->next;
	}
}
