#include "headers.h"
#include "declarations.h"

void* revLL (void *arg)
{
	Node *crr = (struct node*)arg;
        Node *tmp = NULL;
        Node *prev = NULL;
        while(crr)
        {
                tmp = crr->next;
                crr->next = prev;
                prev = crr;
                crr = tmp;
        }
	while(prev->next)
	{
		printf("Value-> %d\t", prev->data);
		prev = prev->next;
	}
        return 0;
}
