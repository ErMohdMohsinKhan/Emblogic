#include<stdio.h>
#include<string.h>

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
	for(int i=0; i<len; i++)
	{
		if ( (str[i] >= 65) && (str[i] <= 122) )
		{
			if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
			{
				vc++;
			}
			else
				cc++;
		}
		else if ( (str[i] >= 48) && (str[i] <= 57) )
			nc++;
		else if ( (str[i] >= 33) && (str[i] <= 47) || ((str[i] >= 58) && (str[i] <= 64)) )
			sc++;
		else if ( str[i] != '\0' )
			bc++;
	}
	printf("\nTotal vowels : %d\nTotal Consonents : %d\nTotal numbers : %d\nTotal Special Characters : %d\nTotal Blank Spaces : %d\n", vc, cc, nc, sc, bc);
	return 0;
}
