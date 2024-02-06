#include <stdio.h>
/*To print all natural numbers between 1 to n using Recursion*/
int natural (int);
int main ()
{
	int n;
	printf("Enter value of n\n");
	scanf("%d", &n);
	printf("Natural numbers between 1 to %d are : \n", n);
	natural(n);
	return 0;
}

int natural (int n)
{
	if(n==0)
		return 0;
	else
		natural(n-1);
	printf("%d\n", n);
}
