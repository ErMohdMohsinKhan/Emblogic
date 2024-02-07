#include <stdio.h>
/*To print Sum of all natural numbers between 1 to n using Recursion*/
int sumNatural (int);
int main ()
{
	int n;
	printf("Enter value of n\n");
	scanf("%d", &n);
	int ans = sumNatural(n);
	printf("Ans : %d\n", ans);
	return 0;
}

int sumNatural(int num)
{
	if(num==1)
		return 1;
	else
		return (num + sumNatural(num-1));
}
