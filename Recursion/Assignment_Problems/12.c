#include <stdio.h>
/*To find LCM of two numbers using Recursion*/
int lcm (int, int);  //Forwared declaration
int main ()
{
	int num1, num2;
	printf("Enter two non-zero numbers\n");
	scanf("%d %d", &num1, &num2);
	if(num1 == 0 || num2 == 0)
	{
		printf("Invalid input\n");
		return 0;
	}
	int prod = num1*num2;
	int ans = lcm(num1, num2);
	ans = prod/ans;
	printf("LCM : %d\n", ans);
	return 0;
}
int lcm (int n1, int n2)
{
	if(n1==n2)
		return n1;
	else
	{
		if (n1>n2)
			return lcm(n1-n2, n2);
		else
			return lcm(n1, n2-n1);
	}
}
