#include "headers.h"
#include "declarations.h"

int nonRep (char arr[]) //it's a shorthand way of saying that the parameter is a pointer to the first element of a character array. 
//Similarly, when we use char *arr, we are explicitly declaring a pointer to a character.
{
        printf("%s : Begin\n", __FILE__);
	int i, j, count;
	int len, flag;
	flag = 0;
	len = strlen(arr);
	for(j=0; (j<len && flag!=1); j++)
	{
		count = 0;
		for(i=j+1; i<len; i++)
		{
			if (arr[i] == arr[j])
			{
				count ++;
			}
		}
		if (count == 0)
		{
			printf("First Non-repeated Character : %c\n", arr[j]);
			flag = 1;
		}	
	}
	printf("%s : End\n", __FILE__);
        return 0;
}

