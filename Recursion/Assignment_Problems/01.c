#include <stdio.h>
/*Power of any Number using Recursion*/
int power (int, int);
int main ()
{
	int num, pow;
	printf("Enter the Number\n");
	scanf("%d", &num);
	printf("Enter the Power\n");
	scanf("%d", &pow);
	int ans = power(num, pow);
	printf("Ans : %d\n", ans);
	return 0;
}

int power(int n, int p)
{	
	if(p==0)
		return 1;
	else
		return n * (power(n, p-1));
}
