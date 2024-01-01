#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
int main()
{
	init();
	Cir_Q *cq = NULL;
	printf("%s : Begin\n", __func__);
	while(1)
	{
		cq = (*fptr[0])((void*)cq);  //mainMenu()
	}
	printf("%s : End\n", __func__);
	return 0;
}
