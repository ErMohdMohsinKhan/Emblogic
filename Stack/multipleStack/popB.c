#include "headers.h"
#include "declarations.h"

int popB()
{
	if(topB == MAX)
        {
                printf("%s : Stack'B' is UnderFlow\n", __func__);
        }
	else
	{
		val = stack[topB];
		//printf("%s : Value-> %2d\n", __func__, stack[topB]);
		topB++;
	}
	return val;
}
