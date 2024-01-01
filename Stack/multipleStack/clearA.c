#include "headers.h"
#include "declarations.h"

void clearA()
{
	printf("%s : Begin\n", __func__);
	if(topA == -1)
	{
		printf("%s : Stack'A' is already Emptied\n", __func__);
	}
	else
	{
		topA = -1;
		printf("%s : Stack'A' is cleared\n", __func__);
	}
	printf("%s : End\n", __func__);
	return;
}
