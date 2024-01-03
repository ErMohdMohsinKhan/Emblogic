#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	printf("%s : Begin\n", __FILE__);
	printf("%s : Calling function ...\n", __FILE__);
	system("./conv");
	printf("%s : End\n", __FILE__);
	return 0;
}
