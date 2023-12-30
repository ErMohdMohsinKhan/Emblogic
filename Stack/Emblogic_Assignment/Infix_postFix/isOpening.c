#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int isOpening(char a)
{
        printf("%s : Begin\n", __func__);
        printf("a : %c\n", a);
        if(a == '('|| a == '[' ||a == '{')
        {
                return 1;
        }
        printf("%s : End\n", __func__);
        return 0;
}
