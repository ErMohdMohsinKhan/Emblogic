#include<stdio.h>
#include<string.h>
#include <ctype.h>

/*WAP that counts number of vowels, consonents, numbers, special characters, and blank space in the string*/

int main()
{
        char str[20];
        int vc, cc, nc, sc, bc;
        vc = cc = nc = sc = bc = 0;
        printf("Enter a string\n");
        fgets(str, 20, stdin);
        int len = strlen(str);
        str[len - 1] = '\0';
	for(int i=0; i<len; ++i)
	{
		if (isalpha(str[i]))
		{
			if (strchr("aeiouAEIOU", str[i]))
				vc++;
			else
				cc++;
		}
		else if (isdigit(str[i]))
				nc++;
		else if (isspace(str[i]))
			bc++;
		else if (str[i] != '\0')
		{
			sc++;
		}
	}
	printf("Total Vowels : %d\nTotal Consonants : %d\nTotal Numbers : %d\nTotal Blank spaces : %d\nTotal Special Characters : %d\n", vc, cc, nc, bc, sc);
	return 0;
}
