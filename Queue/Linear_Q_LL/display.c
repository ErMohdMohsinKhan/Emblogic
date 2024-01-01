#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* display (void* arg)
{
	printf("%s : Begin\n", __func__);
	Node *n = (Node*)arg;
	n = n->next;
	
	while(n)
	{
		printf("%s : Value->%2d\n", __func__, n->data);
		n = n->next;
	} 
	printf("%s : End\n", __func__);
	return 0;
}
