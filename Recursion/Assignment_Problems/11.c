#include <stdio.h>
/*To find HCF of two numbers using Recursion*/
int hcf (int, int);  //Forwared declaration
int main ()
{
	int num1, num2;
	printf("Enter two numbers\n");
	scanf("%d %d", &num1, &num2);
	int ans = hcf(num1, num2);
	printf("HCF : %d\n", ans);
	return 0;
}
int hcf (int n1, int n2)
{
	if(n1==n2 || n2 == 0)
		return n1;
	else if (n1 == 0)
		return n2;
	else
	{
		if (n1>n2)
			return hcf(n1-n2, n2);
		else
			return hcf(n1, n2-n1);
	}
}
