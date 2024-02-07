#include <stdio.h>
/*To find sum of all even or odd numbers in a given range using Recursion*/
int sumOdd (int, int);
int main ()
{
	int range1, range2;
	printf("Enter Ranges : \n");
	scanf("%d %d", &range1, &range2);
	sumOdd(range1, range2);
	printf("\n");
	return 0;
}

int sumOdd(int r1, int r2)
{
	if(r1 == r2)
	{
		if(r1 % 2)
			printf("%d\t", r1);
		else
			return 0;
	}
	else
	{
		if(r1 % 2)
                        printf("%d\t", r1);
		sumOdd(r1+1, r2);
	}
}
