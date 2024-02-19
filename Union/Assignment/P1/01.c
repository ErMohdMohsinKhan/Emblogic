#include <stdio.h>
union temp
{
	int a;
	float b;
	char c;
};
int main()
{
	union temp s = {1, 2.5, 'A'}; //REF LINE
	printf("a : %d\n", s.a);
	printf("b : %.2f\n", s.b);
	printf("c : %c\n", s.c);
	return 0;
}
