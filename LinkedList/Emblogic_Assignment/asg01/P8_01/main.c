#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int main (void)
{
	init();
	Node *start = NULL;
	Node2 *start2 = NULL;
	Node *stP = NULL;
	printf("%s : Begin\n", __func__);
	while(1)
	{
		if(stP == start)
		{
			stP = (*fptr[1])((void*)start);	
			start = stP;
		}
		else if(stP != start)
		{
			start2 = (*fptr[1])((void*)start2);
		}	
	}
	printf("%s : End\n", __func__);
}
