#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* copyll (void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *old, *old_cir;
	old = old_cir = (Node*)arg;
	if (old == NULL)
		return 0;
	Node *start, *dsp;
       start =	dsp = NULL;
	start = (Node*)(*fptr[2])((void*)start); //creatLinklist()
	dsp = start;
	if(old->next != NULL)
	{
	do
	{
		start = (*fptr[3])((void*)start); //creatNode()
		old = old->next;
		start->data = old->data;
		start->next = old->next;
	}while(old->next != old_cir->next);
	}
	printf("%s : %s : Displaying the elements of Circular linkedlist\n", __FILE__, __func__);
	sleep(1);
	(*fptr[5])((void*)start);
	printf("%s : %s : End\n", __FILE__, __func__);
}
