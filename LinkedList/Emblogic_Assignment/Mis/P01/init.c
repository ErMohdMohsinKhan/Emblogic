#include "headers.h"
#include "declarations.h"

void* createLL(void *); 
void* insertNode(void *); 
void* insertNodeValue(void *); 
void* displayNode(void *); 
void* sumLL(void *);
void* revLL(void *);
void* (*fptr[NOF])(void*);
void* (*fnptr[NOFF])(void*);
int sum = 0;
int init()
{
	fptr[0] = createLL;
	fptr[1] = insertNode;
	fptr[2] = displayNode;
	fptr[3] = sumLL;
	fptr[4] = revLL;
	fnptr[0] = insertNodeValue;
	return 0;
}
