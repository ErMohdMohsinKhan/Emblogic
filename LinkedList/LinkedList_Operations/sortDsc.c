#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* sortDsc (void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	        Node *start = (Node*)arg;
        printf("%s : %s : Begin\n", __FILE__, __func__);
        Node *outer = NULL;
        Node *inner1 = NULL;
        Node *inner2 = NULL;
        Node *inner3 = NULL;
        Node *tmp1 = NULL;
        Node *tmp2 = NULL;
        for (outer = start; outer; outer = outer->next)
        {
                inner1 = start->next;  //Points to 1
                inner2 = start->next; //Points to 1
                inner3 = start; //Points to 0
                while(inner1->next)
                {
                        inner2 = inner1; //Point to 1
                        inner1 = inner1->next;  //Points to 2
                        if(inner2->value < inner1->value)
                        {
                                tmp1 = inner1->next;
                                tmp2 = inner2;
                                inner1->next = tmp2;
                                inner3->next = inner1;
                                inner2->next = tmp1;

                                inner3 = inner1; //Points to 1
                                inner1 = inner1->next;
                        }
                        else
                        {
                                inner3 = inner3->next;
                        }
                }
        }
	printf("%s : %s : Linkedlist is sorted successfully in Descending Order, to display the sorted Linkedlist, Please PRESS 4\n", __FILE__, __func__);
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
