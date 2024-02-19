#include <stdio.h>
typedef union Practice
{
	char a,b;
	int i;
	char c;
}practice;
int main(void)
{
	practice C1;
	C1.i = 4;
	printf("a : %c\n", C1.a);
	printf("i : %d\n", C1.i);
	C1.a = 'X';
	printf("a : %c\n", C1.a);
	C1.b = 'Y';
	printf("b : %c\n", C1.b);
	C1.c = 'Z';
	C1.i = 6;
	printf("a : %c\n", C1.a);
	printf("i : %d\n", C1.i);
	printf("b : %c\n", C1.b);
	printf("c : %c\n", C1.c);
}
