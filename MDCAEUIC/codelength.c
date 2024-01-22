#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* codelength (void* ma)
{
	int len;
	printf("%s : Begin\n", __func__);
	len = strlen((char*)ma);
	if (len < 4)
	{
		var = 2;
	}
	else if (len < 8)
	{
		var = 3;
	}
	else if (len < 16)
	{
		var = 4;
	}
	else if (len < 32)
	{
		var = 5;
	}
	else if (len < 64)
	{
		var = 6;
	}
	else if (len < 128)
	{
		var = 7;
	}
	else
		var = -1;
	printf("%s : End\n", __func__);
	return (void*)&var;
}
