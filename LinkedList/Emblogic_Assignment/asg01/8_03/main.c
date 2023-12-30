#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int main (void)
{
	init();
	Node *start = NULL;
	printf("%s : Begin\n", __func__);
	while(1)
		start = (*fptr[1])((void*)start);	
	printf("%s : End\n", __func__);
}
