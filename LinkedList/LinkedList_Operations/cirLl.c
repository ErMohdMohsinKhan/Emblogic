#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* cirLl(void* arg)
{
	Node *start = (Node *)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start_cl = (Node*)malloc(sizeof(Node));
	start_cl = start;
	Node *new = NULL;
	while(start->next)
	{
		start = start->next;
		new = (Node*)malloc(sizeof(Node));
		if(!new)
		{
			perror("realloc");
			(*fptr[0])((void*)"failure");
		}
		new = start;
		start_cl->next = new;
		start_cl = start_cl->next;
	}
	start_cl->next = (Node*)arg; //Making a circulat ll

	printf("%s : %s : Displaying Circular Linkedlist\n\n", __FILE__, __func__);
	start = (Node*)arg;
        Node *crr = start;
        Node *tmp = start;
        if(crr->value == -99)
        {
                crr = crr->next;
                while(crr != start)
                {
                        printf("%s : %s : Value->%2d\n", __FILE__, __func__, crr->value);
                        crr = crr->next;
                }
        }
        else
        {
                while((crr) && (crr->value != -99) && (crr != start))
                {
                        printf("%s : %s : Value->%2d\n", __FILE__, __func__, crr->value);
                        crr = crr->next;
                }
        }
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
