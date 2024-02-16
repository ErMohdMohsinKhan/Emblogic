#include <stdio.h>
/*WAP to set the ith bit*/
int main ()
{
	int a = 0;
	int num;
	printf("%s : Enter the bit number to set\n", __func__);
	scanf("%d", &num);
	unsigned int ans = 1<<num;
	ans = ans | a;
	printf("%s : Ans : %u\n", __func__, ans);
	return 0;
}
