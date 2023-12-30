#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

int main (void)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        init();
        Stack *stack = NULL;
        while(1)
                stack = (Stack*)(*fptr[1])((void*)stack); //mainmenu()
        printf("%s : %s : End\n", __FILE__, __func__);
        return 0;
}
