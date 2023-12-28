#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* insertNodeKy (void* arg)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	Node *start = (Node*)(void*)arg;
	int key;
	Node *new = (Node*)((*fptr[6])(arg));  //creatNode()
	printf("%s : %s : Enter the Key value\n", __FILE__, __func__);
	scanf("%d", &key);
	Node *crr = start;
	Node *prev = start;
	while(crr->next)
	{
		prev = crr; 
		crr = crr->next;
		if(prev->value == key)
		{
			new->next = prev->next;
			prev->next = new;
			break;
		}
	}
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
