#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
int main()
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	init();
	Node *start = NULL;	
	while(1)
	{
		start = (*fptr[1])((void*)start);    //mainMenu()
	}
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
