#include "headers.h"
#include "declarations.h"

void* sumLL (void *arg)
{
	Node *crr = (Node *)arg;
	while(crr->next)
	{
		crr = crr->next;
		sum = sum + crr->data;
	}
	return (void*)&sum;
}
