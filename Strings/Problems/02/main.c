#include "headers.h"
#include "declarations.h"
//Print the first non-repeated chracter of the String:
int main (void)
{
	printf("%s : Begin\n", __FILE__);
	char *str;
	str = malloc(sizeof(char)*20);
	memset(str, '\0', 20);
	printf("Enter a string : \n");
	fgets(str, 20, stdin);
	int i;
	int len;
	len = strlen(str);
	str[len-1] = '\0';
	printf("Entered string : %s\n", str);
	for (i=0; i<len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	nonRep(str);  //str is automatically converted into a pointer to its first element (i.e., &str[0])
	free(str);
	printf("%s : End\n", __FILE__);
	return 0;
}


/* arrays decay into pointers to their first elements when passed as function arguments*/
