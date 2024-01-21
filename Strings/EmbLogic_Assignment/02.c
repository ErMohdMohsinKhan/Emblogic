#include<stdio.h>
#include <stdlib.h>
#include<string.h>

/*WAP to use two functions, one for accepting string and other for display string. Also, print the length of the string.*/

char* getString(); //Forward declaration
void displayString(char*);  //Forward declaration

int main()
{
	printf("%s : Begin\n", __func__);
	char *inp = getString();
	displayString(inp);
	printf("%s : End\n", __func__);
	return 0;
}

char* getString()
{
	int i=0;
	char c;
	char *str = NULL;
	printf("%s : Begin\n", __func__);
	while (1)
	{
		c = getchar(); 
		if (c == '\n')
		{
			break;
		}
		else
		{
			str = realloc(str, i+2);
			if (!str)
			{
				perror("realloc");
				free(str);
				exit(EXIT_FAILURE);
			}
			str[i++] = c;
		}
	}
	str[i] = '\0';
	int len = strlen(str);;
	printf("Length of the String : %d\n", len);
	printf("%s : End\n", __func__);
	return str;
}

void displayString(char *str1)
{
	printf("Entered string : %s\n", str1);
}
