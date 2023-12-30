#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
void* exitProg(void*);
void* mainMenu(void*);
void* creatStack(void*);
void* pushEle(void*);
void* popEle(void*);
void* peekEle(void*);
void* display(void*);
void* flushStack (void*);
void* destroyStack (void*);
void* creatNode(void*);
void* (*fptr[NOF])(void*);
int init(void)
{
        printf("%s : %s : Begin\n", __FILE__, __func__);
        fptr[0] = exitProg;
        fptr[1] = mainMenu;
	fptr[2] = creatStack;
	fptr[3] = pushEle;
	fptr[4] = popEle;
	fptr[5] = peekEle;
	fptr[6] = display;
	fptr[7] = flushStack;
	fptr[8] = destroyStack;
	fptr[9] = creatNode;
	printf("%s : %s : End\n", __FILE__, __func__);
        return 0;
}
