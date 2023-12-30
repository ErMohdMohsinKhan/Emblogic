#include "headers.h"
#include "declarations.h"

int main (void)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        init();
	start = (*ctS)(start);
	inp = getString();
	printf("%s : String received : %s\n", __func__, inp);	
	int i;
        int len;
        len = strlen(inp);
        for(i=0; i<len; i++)
        {
                (*psEl)(start, inp[i]);
        }
	printf("Reversing the String--> ");
	while(1)
	{
		if(len == 0)
			break;
		(*ppEl)(start);
		len--;
	}
        printf("\n\n%s : %s : End\n", __FILE__, __func__);
        return 0;
}

