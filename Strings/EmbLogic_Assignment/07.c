#include<stdio.h>
#include<string.h>
#include<stdbool.h>

/*WAP to compare two strings*/

int main()
{
	char str1[20];
	char str2[20];
	printf("Enter First string : ");
	fgets(str1, 20, stdin);
	printf("Enter Second string : ");
	fgets(str2, 20, stdin);
	int i=0;
	bool status = true;
	while(str1[i] != '\n' && str2[i] != '\n')
	{
		if (str1[i] != str2[i])
		{
			status = false;
			break;
		}
		i++;
	}
	(status)?printf("Two strings are equal\n"):printf("Two strings are NOT equal\n");
	return 0;
}
