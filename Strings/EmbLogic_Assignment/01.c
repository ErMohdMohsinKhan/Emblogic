#include<stdio.h>
#include<stdlib.h>
/*WAP to input a string using getchar()*/
int main()
{
	char *str = NULL;
	int i = 0;
	char c;
	while(1)
	{
		c = getchar();
		if (c == '\n')
		{
			break;
		}	
		else
		{
			str = realloc(str, i+2);
			if(!str)
			{
				perror("realloc");
				free(str);
				exit(EXIT_FAILURE);
			}
			str[i++] = c;
		}
	}
	str[i] = '\0';  //To ensure EOS 
	printf("Entered String : %s\n", str);
	free(str);
	return 0;
}
