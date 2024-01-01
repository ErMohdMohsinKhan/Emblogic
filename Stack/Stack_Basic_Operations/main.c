#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
int main()
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        init();
        Stack *stk = NULL;
        while(1)
        {
                stk = (*fptr[1])((void*)stk);    //mainMenu()
        }
        printf("%s : %s : End\n", __FILE__, __func__);
        return 0;
}
