#include "headers.h"
#include "declarations.h"

Node* reverse(Node *head)
{
	printf("%s : Begin\n", __func__);
	if((head == NULL) || (head->next == NULL))
		return head;
	Node *newHead = reverse(head->next);
	Node *headNext = head->next;
	headNext->next = head;
	head->next = NULL;
	return newHead;
}
