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
void* issorted (void*);

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
	fptr[8] = issorted;

	fptr[9] = insertMenu;
	fptr[10] = insertNodeBeg;
	fptr[11] = insertNodeEnd;
	fptr[12] = insertNodenP;
	fptr[13] = insertNodekV;

	fptr[14] = deleteMenu;
	fptr[15] = deleteNodeBeg;
	fptr[16] = deleteNodeEnd;
	fptr[17] = deleteNodenP;
	fptr[18] = deleteNodekV;

	printf("%s : Begin\n", __func__);
	return 0;
}
