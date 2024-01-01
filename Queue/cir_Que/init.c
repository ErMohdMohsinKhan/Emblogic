#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"

void* mainMenu(void*);
void* creatQueue(void*);
void* enqueue(void*);
void* dequeue(void*);
void* display(void*);
void* (*fptr[NOF])(void*);
int init()
{
	//printf("%s : Begin\n", __func__);
	fptr[0] = mainMenu;
	fptr[1] = creatQueue;
	fptr[2] = enqueue;
	fptr[3] = dequeue;
	fptr[4] = display;
	//printf("%s : End\n", __func__);
	return 0;
}
