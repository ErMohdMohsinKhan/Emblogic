#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* insertNodeBeg (void* arg)
{
	Node *start = (Node*)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *new = (Node*)((*fptr[6])(arg));  //creatNode()
        printf("%s : %s : New node is created successfully\n", __FILE__, __func__);
	new->next = start->next;
	start->next = new;
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
