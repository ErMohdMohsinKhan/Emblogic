#include "headers.h"
#include "declarations.h"

int dup (char arr[]) //it's a shorthand way of saying that the parameter is a pointer to the first element of a character array. 
//Similarly, when we use char *arr, we are explicitly declaring a pointer to a character.
{
        printf("%s : Begin\n", __FILE__);
	int i, j, count;
	count = 0;
	int len;
	char ch;
	len = strlen(arr);
	printf("%s : Please Enter a Charcter : \n", __FILE__);
	scanf(" %c", &ch);
	for(j=0; j<len; j++)
	{
		if (ch == arr[j])
		{
			count ++;
		}
	}
	printf("Character : %c has %d occurences\n", ch, count);
	printf("%s : End\n", __FILE__);
        return 0;
}

