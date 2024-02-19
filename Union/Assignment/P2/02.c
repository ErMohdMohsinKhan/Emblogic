#include <stdio.h>
union uTemp
{
	double a;
	int b[10];
	char c;
}u;
int main()
{
	printf("Size of Union : %d\n", sizeof(u));
}
