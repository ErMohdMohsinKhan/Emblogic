#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
int main ()
{
	printf("%s : Begin\n", __func__);
	init();
	Node* n = NULL;
	while(1)
	{
		n = (*fptr[0])(n); //mainMenu()
	}
	printf("%s : End\n", __func__);
	return 0;
}
