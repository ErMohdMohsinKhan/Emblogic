#include <stdio.h>
/*To print all Even Numers using Recursion in a given range*/
int even (int, int);
int main ()
{
	printf("Enter the Range\n");
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	even(r1, r2);
	printf("\n");
	return 0;
}

int even (int r1, int r2)
{
	if(r1==r2)
		return 0;
	else
	{
		if(r1 % 2 == 0)
			printf("%d\t", r1);
		return even(++r1, r2);
	}
}
