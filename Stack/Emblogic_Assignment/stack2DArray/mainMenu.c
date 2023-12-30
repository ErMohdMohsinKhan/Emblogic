#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* mainMenu(void* arg)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        Stack *stack;
        stack = (Stack*)arg;
        int choice;
        printf("%s : %s : <<MENU>>\n", __FILE__, __func__);
        if(!stack)
                printf("%s : %s : 1 : Create Stack\n", __FILE__, __func__);
        else
        {
                printf("%s : %s : 2 : Push Element into the Stack\n", __FILE__, __func__);
                printf("%s : %s : 3 : Pop Element from the Stack\n", __FILE__, __func__);
                printf("%s : %s : 4 : Display the Stack\n", __FILE__, __func__);
                printf("%s : %s : 5 : Flush the Stack\n", __FILE__, __func__);
                printf("%s : %s : 6 : Destroy the Stack\n", __FILE__, __func__);
        }
        printf("%s : %s : 0 : Exit Program\n", __FILE__, __func__);
        printf("%s : %s : Enter your choice\n", __FILE__, __func__);
        scanf("%d", &choice);
        if ((choice == 1) && (!stack))
                return (*fptr[choice+1])((void*)stack); //creatStack
        else if (((choice > 1) && (choice <= 5)) && (stack))
                 (*fptr[choice+1])((void*)stack); //all()
        else if ((choice == 6) && (stack))
                arg = (*fptr[choice+1])((void*)stack);
        else if (choice == 0)
                (*fptr[choice])((void*)"success");
        printf("%s : %s : End\n", __FILE__, __func__);
        return arg;
}
