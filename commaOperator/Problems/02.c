#include <stdio.h>
int main()
{
	int a = 8, b;
	b = a++,++a;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	a = 8;
	b = 0;
	b = (a++,++a);
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	return 0;
}
