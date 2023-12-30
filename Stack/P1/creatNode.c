#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* creatNode(void* arg)
{
        Node *new = NULL;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	new = (Node*)malloc(sizeof(Node));
        if(!new)
        {
        	perror("malloc");
                (*fptr[0])((void*)"failure");
        }
	return (void*)new;
}

