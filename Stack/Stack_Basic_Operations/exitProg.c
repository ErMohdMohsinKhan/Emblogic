#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
void* exitProg (void *status)
{
        printf("%s : %s :  Begin\n", __FILE__, __func__);
        if( strncmp("failure", (char*)status, 7) == 0 )
        {
                printf("%s : %s : Abruptly terminating the Program...\n\n", __FILE__, __func__);
                exit(EXIT_FAILURE);
        }
        else if ( strncmp("success", (char*)status, 7) == 0 )
        {
                printf("%s : %s :  Gracefully exiting the Program...\n\n", __FILE__, __func__);
                exit(EXIT_SUCCESS);
        }
}
