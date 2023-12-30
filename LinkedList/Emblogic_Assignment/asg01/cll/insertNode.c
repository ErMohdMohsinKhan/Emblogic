#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNode (void* arg)
{
        printf("%s : Begin\n", __func__);
       // (*fptr[7])(arg); //insertmenu;
        Node *new, *cir, *strt;
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
 
        printf("%s : End\n", __func__);
        return (void*)arg;
}
