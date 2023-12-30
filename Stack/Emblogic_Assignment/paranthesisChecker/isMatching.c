#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int isMatching(char a)
{
       // printf("%s : Begin\n", __func__);
//	printf("a : %c\n", a);
	char b = stk->skptr[stk->top];
//	printf("b : %c\n", b);
	if(a == ')' && b == '(')
	{
		return 1;
	}
	else if (a == ']' && b == '[')
	{
		return 1;
	}
	else if (a == '}' && b == '{')
	{
		return 1;
	}
  //      printf("%s : End\n", __func__);
        return 0;
}

