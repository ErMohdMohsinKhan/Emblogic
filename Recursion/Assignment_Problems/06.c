#include <stdio.h>
/*To print reverse of a number using Recrsion*/
int revNumber (int);
int main ()
{
	int num;
	printf("Enter number\n");
	scanf("%d", &num);
	printf("Number reversed : ");
	revNumber(num);
	printf("\n");
	return 0;
}

int revNumber(int n)
{
	int rem;
	if( n==0)
		return 0;
	else
	{
		rem = n%10;
		printf("%d", rem);
		revNumber(n/10);
	}
}
