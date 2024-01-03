#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("%s : Begin\n", __func__);
	system("ls -l|tail -n +2");
	printf("%s : End\n", __func__);
	return 0;
}
