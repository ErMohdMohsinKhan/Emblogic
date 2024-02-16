#include <stdio.h>
/*WAP to find the ith bit*/
int main ()
{
	int a = 121; //Binary equivalent = 1111001
	int bit;
	printf("%s : Enter the bit to find\n", __func__);
	scanf("%d", &bit);
	int b = 1;
	unsigned int ans = (b<<bit);
	ans = ans & a;
	(a)?printf("%s : Bit is set -> : %d\n", __func__, ans):printf("%s : Bit is unset\n", __func__);
	return 0;
}
