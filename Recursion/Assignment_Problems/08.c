#include <stdio.h>
/*To find sum of digits of a number using Recursion*/
int sum (int);
int main ()
{
	int num;
	printf("Enter the number\n");
	scanf("%d", &num);
	num = sum(num);
	printf("Sum : %d\n", num);
	return 0;
}

int sum (int n)
{
	int rem;
	if(n==0)
		return 0;
	else
	{
		rem = n%10;
		return rem + sum(n/10); 
	}
}
