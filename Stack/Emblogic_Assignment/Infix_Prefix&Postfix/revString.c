#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

char *revString(char *str)
{
        printf("%s : You entered string : %s\n", __func__, str);
	char *reverse;
	reverse = (char *)malloc(20 * sizeof(char));
	int i = len-1;
	int u=0;
	for(i; i>-1; i--)
	{
		if(str[i] == ')')
			reverse[u++] = '(';
		else if(str[i] == '(')
                        reverse[u++] = ')';
		else
			reverse[u++] = str[i];
	}
	printf("%s : Reverse String : %s\n", __func__, reverse);
        return reverse;
}
