#include <stdio.h>
#include <string.h>
/*Reverse a string using Recursion*/
void reverseString (int, int, char []);
int main ()
{
	char str[20];
	printf("Enter the string\n");
	fgets(str, 20, stdin);
	int len = strlen(str);
	reverseString(0, len-2, str);
	printf("String reversed : %s", str);
	return 0;
}
void reverseString(int start, int end, char str[])
{
	if(start < end)
	{
		char tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		reverseString(start+1, end-1, str);
	}
}
