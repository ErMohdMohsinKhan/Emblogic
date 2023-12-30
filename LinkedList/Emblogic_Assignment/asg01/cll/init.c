#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
int val;
void* mainMenu (void*);
void* exitProg (void*);
void* creatLinkList (void*);
void* creatNode (void*);
void* insertNode (void*);
void* displaylinkList (void*);
void* copyll (void*);
void* (*fptr[NOF])(void*);

int init()
{
        printf("%s : Begin\n", __func__);
        val = 100;
        fptr[0] = exitProg;
        fptr[1] = mainMenu;
        fptr[2] = creatLinkList;
        fptr[3] = creatNode;
        fptr[4] = insertNode;
        fptr[5] = displaylinkList;
        fptr[6] = copyll;
	printf("%s : Begin\n", __func__);
        return 0;
}
