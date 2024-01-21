#include<stdio.h>
#include<string.h>

/*WAP to concatenate two strings*/

int main()
{
	char str1[20];
	char str2[20];
	printf("Enter the First string \n");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter the Second string \n");
	fgets(str2, sizeof(str2), stdin);
	int len = strlen(str1);
	str1[len - 1] = '\0';
	len = strlen(str2);
	str2[len - 1] = '\0';
	printf("Concatenating strings -> %s\n", strcat((strcat(str1, " ")), str2));
	return 0;
}
