#include <stdio.h>
int main()
{
	int a = 8, b;
	b = (a++,++a,a>>2);
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	return 0;
}
