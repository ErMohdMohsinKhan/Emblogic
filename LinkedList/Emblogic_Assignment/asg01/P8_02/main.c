#include "headers.h"
#include "declarations.h"
int main (void)
{
	init();
	Node *start = NULL;
	Node *start2 = NULL;
	printf("%s : Begin\n", __func__);
	while(1)
	{
		printf("1\n");
		start = (*fptr[1])((void*)start);	
		printf("2\n");
//	}
	//while(1)
	//{
		start2 = (*fptr[24])((void*)start2);	
		printf("3\n");
	}
	printf("%s : End\n", __func__);
}
