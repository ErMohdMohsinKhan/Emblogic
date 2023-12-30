#include "headers.h"
#include "declarations.h"

void reverse(Node *start)
{
    	Node *prev = NULL; // It will be used to keep track of the last node in the reversed group
    	Node *current = start; // node current 
    	Node *npp = NULL; // temporarily store the next node in the list
    	int count = 0;
	int K = 3;
    	while (current != NULL && count < K)
	{
        	npp = current->next;
        	current->next = prev;
        	prev = current;
        	current = npp;
        	count++;
    	}

    	if (start != NULL)
	{
        	start->next = current;
    	}

    	count = 0;
    	while (current != NULL && count < K - 1)
	{
        	current = current->next;
        	count++;
    	}

    	if (current != NULL)
	{
        	reverse(current);
        	start->next = prev;
    	}
}

