#include <stdio.h>

int main (void)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : This is the invoked Program\n", __FILE__, __func__);
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
