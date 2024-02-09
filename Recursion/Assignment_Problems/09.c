#include <stdio.h>
/*To find factorial of a number using Recursion*/
int factorial (int);
int main ()
{
	int num;
	printf("Enter the number\n");
	scanf("%d", &num);
	num = factorial(num);
	printf("Factorial : %d\n", num);
	return 0;
}

int factorial (int n)
{
	if(n==1)
		return 1;
	else
	{
		return n * factorial(n-1); 
	}
}
