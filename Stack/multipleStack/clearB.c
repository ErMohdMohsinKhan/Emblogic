#include "headers.h"
#include "declarations.h"

void clearB()
{
	printf("%s : Begin\n", __func__);
	if(topB == MAX)
	{
		printf("%s : Stack'B' is already Emptied\n", __func__);
	}
	else
	{
		topB = MAX;
		printf("%s : Stack'B' is cleared\n", __func__);
	}
	printf("%s : End\n", __func__);
	return;
}
