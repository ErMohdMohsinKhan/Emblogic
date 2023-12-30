#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
Stack *stk = NULL;
int main()
{
	printf("%s : Begin\n", __func__);
	char *inp = getString();	
	stk = creatStack();
	int i =0;
	int l = strlen(inp);
	int ret;
	for(i=0; i<l; i++)
	{
		if (isOpening(inp[i]))
		{
			//printf("%c\n", inp[i]);
			pushStack(inp[i]);
		}
		else if ((ret = isEmpty()) == 0)
		{
			printf("%s : Either Paranthesis is Un-balanced or Invalid input type\n", __func__);
			exit(0);
		}
		
		else 
		{
			if (ret = isMatching(inp[i]) == 1)
			{
				popStack(inp[i]);
			}
			else if((ret = isMatching(inp[i]) == 0) && ((inp[i] == ']') || (inp[i] == ')') || (inp[i] == '}')))
			{
				printf("\n%s : Paranthesis is Un-balanced\n", __func__);
				free(inp);
				exit(0);
			}
		}
	}
	i = isEmpty();
	if(i==0)
	{
		printf("\n%s : Paranthesis is Balanced\n", __func__);
	}
	else
	{
		printf("\n%s : Paranthesis is Balanced\n", __func__);
	}
	
	free(inp);
	printf("%s : End\n", __func__);
	return 0;
}
