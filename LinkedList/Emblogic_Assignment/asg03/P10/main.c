#include "headers.h"
#include "declarations.h"

int main (void)
{
        printf("%s : Begin\n", __func__);
	init();
	while(1)
	{
		start = (*mM)(start);
	}
        printf("%s : End\n", __func__);
        return 0;
}
