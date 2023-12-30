#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* deleteduplicate (void* arg)
{
        Node *start, *dup, *prev;
        start = dup = prev = (Node*)arg;
        printf("%s : Begin\n", __func__);
	while (start)
	{
    		dup = start->next;
    		prev = start;
    		while (dup)
    		{
        		if (dup->data == start->data)
        		{
            			prev->next = dup->next; // Removing duplicate Node
            			free(dup);
            			dup = prev->next; // Move dup to the next node after deleting, it is necessary to maintain continuity of loop
        		}
        		else
       	 		{
            			prev = dup;
            			dup = dup->next;
        		}
    		}
    		start = start->next;
	}
        printf("%s : End\n", __func__);
        return (void*)arg;
}

