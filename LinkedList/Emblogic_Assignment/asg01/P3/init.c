#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
int val;
void* mainMenu (void*);
void* exitProg (void*);
void* creatLinkList (void*);
void* creatNode (void*);
void* insertNode (void*);
void* deleteNode (void*);
void* totoccr (void*);
void* displaylinkList (void*);

void* insertMenu (void*);
void* insertNodeBeg (void*);
void* insertNodeEnd (void*);
void* insertNodenP (void*);
void* insertNodekV (void*);

void* deleteMenu (void*);
void* deleteNodeBeg (void*);
void* deleteNodeEnd (void*);
void* deleteNodenP (void*);
void* deleteNodekV (void*);

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
	fptr[5] = deleteNode;
	fptr[6] = displaylinkList;
	fptr[7] = totoccr;

	fptr[8] = insertMenu;
	fptr[9] = insertNodeBeg;
	fptr[10] = insertNodeEnd;
	fptr[11] = insertNodenP;
	fptr[12] = insertNodekV;

	fptr[13] = deleteMenu;
	fptr[14] = deleteNodeBeg;
	fptr[15] = deleteNodeEnd;
	fptr[16] = deleteNodenP;
	fptr[17] = deleteNodekV;

	printf("%s : Begin\n", __func__);
	return 0;
}
