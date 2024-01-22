#include<stdio.h>
#include<string.h>

/*WAP that appends the contents of the string s2 to the end of string s1*/

int main()
{
	char s1[10] = "Hello";
	char s2[10] = "World";
	strcat((strcat(s1, " ")), s2); //Concatenating strings
	printf("S1 : %s\n", s1);
	printf("S2 : %s\n", s2);
	return 0;
}
