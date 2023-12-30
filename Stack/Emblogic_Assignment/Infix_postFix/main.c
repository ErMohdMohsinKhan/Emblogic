#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
Stack *stk = NULL;
int len = '\0';
char op[20];
int a = 0;
int main()
{
	printf("%s : Begin\n", __func__);
	char *inp = getString();
	len = strlen(inp);
	printf("Len : %d\n", len);
	char *bkp = (char *)malloc(20 * sizeof(char));
	strcpy(bkp, inp);
	stk = creatStack();
	int i;
	
	for(i=0; i<len; i++)
	{
		if (isOpening(inp[i]))
                {
                        printf("%c\n", inp[i]);
                        pushStack(inp[i]);
                }
		else if(isOperand(inp[i]))
		{
			printf("OPERAND : %c\n", inp[i]);
			op[a++] = inp[i];
		}
		else if(isClosing(inp[i]))
		{
			while(stk->skptr[stk->top] != '(')
			{
					popStack();	
			} 
			if(stk->skptr[stk->top] == '(')
				popStack();
		}
		else if(isOperator(inp[i]))
		{
			if(isEmpty())	
			{
				pushStack(inp[i]);
			}
			else
			{
				if(compare(inp[i]))  //If higher precedence then push else pop
				{
					pushStack(inp[i]);
				}
				else
				{
					while(stk->skptr[stk->top] != '+' || stk->skptr[stk->top] != '-')
					{
						popStack();
					}
				}
			}
		}

	}
	while(stk->top != -1)
	{
		popStack();
	}
	printf("%s : Input INFIX Expression : %s\n", __func__, bkp);
	printf("\n%s : Equivalent POSTFIX Expression -->>  %s\n", __func__, op);
	printf("\n%s : End\n", __func__);
}
