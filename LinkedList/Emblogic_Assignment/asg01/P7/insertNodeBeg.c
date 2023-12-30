#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNodeBeg (void* arg)
{
	Node *strt;
       	Node *new;
	Node *cir;
	printf("%s : Begin\n", __func__);
	new = (Node*)(*fptr[3])(arg); //CreatNode
	strt = cir = (Node*)arg;
	if(strt->next == NULL)         // If the list is empty, make the new node circular
	{
		new->next = new;
		strt->next = cir->next = new;
	}
	else
	{
		strt = strt->next;
		while(strt->next != cir->next)
		{
			strt = strt->next;
		}
		strt->next = new;
		new->next = cir->next;
		cir->next = new;
	}
/*	 if (strt->next == NULL) 
	 {
        // If the list is empty, make the new node circular
        	new->next = new;
        	strt->next = cir->next = new;
    	}
	else 
	{
        	cir = cir->next; // Move cir to the first node
        	while (cir->next != strt->next) {
            	cir = cir->next;
        }
        cir->next = new;
        new->next = strt->next;
        strt->next = new;
    }  */
	printf("%s : End\n", __func__);
	return (void*)arg;
}
