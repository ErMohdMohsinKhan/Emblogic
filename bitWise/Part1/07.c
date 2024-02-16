#include <stdio.h>
/*WAP to clear a paricular bit*/
int main ()
{
	int num;
	printf("%s : Enter the bit to clear\n", __func__);
	scanf("%d", &num);
	int a = 121;  //Binary equivalent = 1111001
	int b = 1;
	unsigned int ans;
	unsigned int mask = ~(b<<num);
	printf("%s : Mask : %u\n", __func__, mask);
	ans = (a & mask);
	printf("%s : Ans : %u\n", __func__, ans);
	return 0;
}
