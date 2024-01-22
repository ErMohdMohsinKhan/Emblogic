#include<stdio.h>
#include<string.h>

/*WAP that copies the characters contained in a source string to a target string*/

int main()
{
	char str1[20] = "Source String"; 
	char str2[20] = "Destination String"; 
	printf("String1 : %s\n", str1);
	printf("String2 : %s\n", str2);
	strcpy(str2, str1);
	printf("String1 : %s\n", str1);
	printf("String2 : %s\n", str2);
	return 0;
}
