#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
int main()
{
	printf("%s : Begin\n", __func__);
	init();
	PQueue *pq = NULL;
	while(1)
	{
		pq = (PQueue*)(*fptr[1])((void*)pq); //mainMenu()
	}
	printf("%s : End\n", __func__);
	return 0;
}
