#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main (void)
{
	printf("Begin\n");
	int ch;
	int i = 0;
	char str[20];
	printf("Please Enter a String\n");
	fgets(str, 20, stdin);
	int len;
	len = strlen(str);
	str[len - 1] = '\0';
	/*while ((ch = getchar()) != '\n')
	{
		str[i++] = getchar();
	}
	str[i] = '\0';
	getchar();*/

	printf("Entered String\t : %s\n", str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}	
		i++;
	}
	printf("Converted String\t : %s\n", str);
	printf("End\n");
	return 0;
}
