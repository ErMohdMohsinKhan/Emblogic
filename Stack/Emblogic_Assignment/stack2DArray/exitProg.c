#include "headers.h"
#include "declarations.h"

void* exitProg (void* arg)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        if (strncmp((char*)arg, "failure", 7) == 0)
        {
                printf("%s : %s : Abruptly terminating the Program\n", __FILE__, __func__);
                exit(EXIT_FAILURE);
        }
        else if (strncmp((char*)arg, "success", 7) == 0)
        {
                printf("%s : %s : Gracefully ending the Program\n", __FILE__, __func__);
                exit(EXIT_SUCCESS);
        }
        printf("%s : %s : End\n", __FILE__, __func__);
        return 0;
}
