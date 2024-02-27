#include <stdio.h>
#include <string.h>
/*WAP to find the length of Longets substring present*/
int main ()
{
	char inp[10];
	printf("%s : Enter String\n", __func__);
	fgets(inp, 10, stdin);
	int len = strlen(inp);
	inp[len - 1] = '\0';
	printf("%s\n", inp);
	int i, j, pos;
	for(j=0; j<len; j++)
	{
		for(i=
	}
}
