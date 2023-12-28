#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* display(void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start = (Node*)arg;
	Node *crr = start;
	Node *tmp = start;
	if(crr->value == -99)
	{
		crr = crr->next;
		while(crr)
		{
			printf("%s : %s : Value->%2d\n", __FILE__, __func__, crr->value);
			crr = crr->next;
		}
	}
	else
	{
		while((crr) && (crr->value != -99))
		{
			printf("%s : %s : Value->%2d\n", __FILE__, __func__, crr->value);
                        crr = crr->next;
		}
	}
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
