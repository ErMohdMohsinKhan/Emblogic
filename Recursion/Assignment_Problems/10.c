#include <stdio.h>
/*To generate nth Fibonacci term using Recursion*/
void Fibonacci (int, int, int);
int main ()
{
	int num;
	printf("Enter the term\n");
	scanf("%d", &num);
	int a = 0;
	int b = 1;
	printf("%d\t%d\t", a, b);
	Fibonacci(a, b, num);
	printf("\n");
	return 0;
}

void Fibonacci (int a, int b, int n)
{
	int c;
	if(n==2)
		return;
	else
	{
		c = a+b;
		printf("%d\t", c);
		a = b;
		b = c;
		return Fibonacci(a, b, (n-1)); 
	}
}
