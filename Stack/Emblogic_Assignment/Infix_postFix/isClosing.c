#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int isClosing(char a)
{
	printf("%s : Begin\n", __func__);
      	printf("a : %c\n", a);
	if(a == ')')
	{
		return 1;
	}	
	else
		return 0;
	printf("%s : End\n", __func__);
}
