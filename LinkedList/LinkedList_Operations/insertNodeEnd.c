#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* insertNodeEnd (void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start = (Node*)arg;
	Node *new = (Node*)((*fptr[6])(arg));  //creatNode()
        printf("%s : %s : New node is created successfully\n", __FILE__, __func__);
	Node *crr = start;
	if(start->next)
	{
		crr = start->next;
		while(crr->next)
		{
			crr = crr->next;
			printf("\n1");
		}
	}
	crr->next = new;
	printf("%s : %s : End\n", __FILE__, __func__);

	return arg; 
}
