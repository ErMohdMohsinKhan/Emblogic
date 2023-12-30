#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNodeBeg (void* arg)
{
	Node *strt, *new, *cir;
	printf("%s : Begin\n", __func__);
	new = (Node*)(*fptr[3])(arg); //CreatNode
	strt = cir = (Node*)arg;
	if(strt->next == NULL)         // If the list is empty, make the new node circular
        {
                new->next = new;
                strt->next = cir->next = new;
		new->prev = strt;
        }
	else
	{
		strt = strt->next;
                while(strt->next != cir->next)
                {
                        strt = strt->next;
                }
		new->prev = cir;
                strt->next = new;
                new->next = cir->next;
                cir->next = new;
	}
/*	new->next = strt->next;
	new->prev = strt;
	strt->next = new; */
	printf("%s : End\n", __func__);
	return (void*)arg;
}
