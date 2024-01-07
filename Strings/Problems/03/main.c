#include "headers.h"
#include "declarations.h"
//Check the Occurences of the Entered chracter in the String:
int main (void)
{
	printf("%s : Begin\n", __FILE__);
	char str[50];
	int i, flag;
	flag = 1;
	char ch;
	for(i=0; i<50; i++)
	{
		str[i] = '\0';
	}
	i=0;
	printf("%s : Please Enter a string\n", __FILE__);
	while (flag)
	{
		ch = getchar();
		if (ch == '\n')
		{
			flag = 0;
		}	
		else
			str[i++] = ch;
	}
	str[i] = '\0';
	int len;
	len = strlen(str);
	for (i=0; i<len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	dup(str);  //str is automatically converted into a pointer to its first element (i.e., &str[0])
	printf("%s : End\n", __FILE__);
	return 0;
}


/* arrays decay into pointers to their first elements when passed as function arguments*/
