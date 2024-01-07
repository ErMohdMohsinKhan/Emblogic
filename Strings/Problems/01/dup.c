#include "headers.h"
#include "declarations.h"

int dup (char arr[]) //it's a shorthand way of saying that the parameter is a pointer to the first element of a character array. 
//Similarly, when we use char *arr, we are explicitly declaring a pointer to a character.
{
        printf("%s : Begin\n", __FILE__);
	printf("%s : %s\n", __FILE__, arr);
	int i, j, count;
	int len;
	len = strlen(arr);
	printf("%s : Duplicate Characters found in the string : ", __FILE__);
	for(j=0; j<len; j++)
	{
		count = 0;
		for(i=j+1; i<len; i++)
		{
			if (arr[i] == arr[j])
			{
				count ++;
			}
		}
		if (count == 1)
			printf("\"%c\",", arr[j]);
	}
	printf("\n");
	printf("%s : End\n", __FILE__);
        return 0;
}

