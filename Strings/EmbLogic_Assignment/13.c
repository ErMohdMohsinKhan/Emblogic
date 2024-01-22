#include<stdio.h>
#include<string.h>

/*WAP that removes whitespace characters from the beginning and end of a string*/

void trimSpaces(char*);  //Forward declaration

int main()
{
	char str1[30] = " Spaces before, spaces after ";
	printf("Actual String ->\n%s\n", str1);
	trimSpaces(str1);
	return 0;
}

void trimSpaces(char *str)
{
	int ind = 0;
	int len = strlen(str);
	str[len-1] = '\0';
	while(str[ind] != '\0')
	{
		str[ind] = str[ind+1];
		ind++;
	}
	printf("After trimming ->\n%s\n", str);

}
