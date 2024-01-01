#include "headers.h"
#include "declarations.h"
void* exitProgram (void *);
void* mainMenu (void *);
void* creatPriorityQueue(void *);
void* enqueue(void *);
void* dequeue(void *);
void* display(void *);
void* destroy(void *);
void* (*fptr[NOF]) (void *);
int init()
{
	printf("%s : Begin\n", __func__);
	fptr[0] = exitProg;
	fptr[1] = mainMenu;
	fptr[2] = creatPriorityQueue;
	fptr[3] = enqueue;
	fptr[4] = dequeue;
	fptr[5] = display;
	fptr[6] = destroy;
	printf("%s : End\n", __func__);
	return 0;
}
