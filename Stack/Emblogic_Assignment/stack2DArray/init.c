#include "headers.h"
#include "declarations.h"

void* exitProg(void*);
void* mainMenu(void*);
void* creatStack (void*);
void* pushElement (void*);
void* popElement (void*);
void* displayStack (void*);
/*void* flushStack (void*);
void* destroyStack (void*);

void* inEl(void*);*/
void* (*fptr[NOF])(void*);

int init()
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        fptr[0] = exitProg;
        fptr[1] = mainMenu;
        fptr[2] = creatStack;
        fptr[3] = pushElement;
        fptr[4] = popElement;
        fptr[5] = displayStack;
   /*     fptr[6] = flushStack;
        fptr[7] = destroyStack;

        fptr[8] = inEl;
     */   printf("%s : %s : End\n", __FILE__, __func__);
        return 0;
}
