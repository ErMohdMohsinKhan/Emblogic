#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* mainMenu(void* arg)
{
	printf("%s : Begin\n", __func__);
		printf("%s : __MAIN MENU__\n", __func__);
		printf("%s : ----------------------\n", __func__);
		printf("%s : 1 : Compress File\n", __func__);
		printf("%s : 2 : Compression Statistics\n", __func__);
		printf("%s : 3 : Decompress File\n", __func__);
		printf("%s : 4 : Deompression Statistics\n", __func__);
		printf("%s : 0 : Exit Program\n", __func__);
		printf("%s : ----------------------\n\n", __func__);
		printf("%s : Please enter your choice :\n", __func__);
		scanf("%d", &var);
	if (var==0)
	{
		(*fptr[var+1])((void*)"success");
	}
	else if ((var >=1) || (var<=4))
	{
		(*fptr[var+5])(NULL);
	}
	printf("%s : End\n", __func__);
	return 0;
}
