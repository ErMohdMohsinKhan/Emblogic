#include "headers.h"
#include "declarations.h"

void displayLL (Node *p)
{
	Node *crr = p;
	printf("%s : Displaying LinkedList\n", __func__);
	while (crr->next)
	{
		crr = crr->next;
		printf("%s : Value-> %d\n", __func__, crr->data);
	}
	
}
