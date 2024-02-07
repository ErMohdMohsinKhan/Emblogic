#include <stdio.h>
/*To check Palindrome using Recursion*/
int palindrome (int, int);
int main ()
{
	int num;
	int rev=0;
	printf("Enter the number\n");
	scanf("%d", &num);
	rev = palindrome(rev, num);
	printf("Rev : %d\n", rev);
	(rev == num)?printf("Yes\n"):printf("No\n");
	return 0;
}

int palindrome (int rev, int n)
{
	int rem;
	if(n == 0)
		return rev;
	else
	{
		rem = n%10;
		rev = rev*10 + rem;
		return palindrome(rev, n/10);
	}
}
