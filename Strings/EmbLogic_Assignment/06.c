#include<stdio.h>
#include<string.h>

/*WAP that count frequency of each character in a string*/

int main()
{
	char str[20];
	printf("Enter the string \n");
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        str[len - 1] = '\0';
	int count=0;
	int flag=0;
	for(int j=0; j<len-1; j++)
	{
		count = flag = 0;
		for(int i=0; i<len-1; i++)
		{
			if(str[i] == str[j])
				count++;
		}
		for(int k=0; k<j; k++)
		{
			if (str[j] == str[k])
			{
				flag = 1;
			}
		}
		if (flag == 0)
				printf("Frequency of character %c is : %d\n", str[j], count);	
	}
	return 0;
}
