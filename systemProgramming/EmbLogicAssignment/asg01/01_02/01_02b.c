#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	system("ls -l");
	system("./01_02a");
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
