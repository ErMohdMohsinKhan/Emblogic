#include <stdio.h>
int main()
{
	int a = (5,4);
	printf("a : %d\n", a);
	a = (printf("Jenny\n"), 2);
	printf("a : %d\n", a);
	a = (printf("Jenny\n"), 2, 3);
	printf("a : %d\n", a);
	return 0;
}
