#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* findLar (void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start = (Node *)arg;
        Node *crr, *prev;
        int temp;
        if(start->next)
        {
                crr = prev = start->next;
                temp = prev->value;
        }
        else
        {
                printf("%s : %s : LinkedList is emptied\n", __FILE__, __func__);
                return 0;
        }
        if(crr->next)
        {
                while(crr->next)
                {
                        crr = crr->next;
                        if(temp < crr->value)
                        {
                                temp = crr->value;
                        }
                }
                printf("%s : %s : Largest Element->%2d\n", __FILE__, __func__, temp);
        }
        else
                printf("%s : %s : Largest Element->%2d\n", __FILE__, __func__, temp);
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
