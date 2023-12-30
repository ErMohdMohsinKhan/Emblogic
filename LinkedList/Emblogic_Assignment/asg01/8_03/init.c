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

void* creatLinkList2 (void*);
void* creatNode2 (void*);
void* insertNode2 (void*);
void* deleteNode2 (void*);
void* displaylinkList2 (void*);
void* merge(void*);
void* dspMerge(void*);

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

	fptr[7] = insertMenu;
	fptr[8] = insertNodeBeg;
	fptr[9] = insertNodeEnd;
	fptr[10] = insertNodenP;
	fptr[11] = insertNodekV;

	fptr[12] = deleteMenu;
	fptr[13] = deleteNodeBeg;
	fptr[14] = deleteNodeEnd;
	fptr[15] = deleteNodenP;
	fptr[16] = deleteNodekV;

	fptr[17] = creatLinkList2;
        fptr[18] = insertNode2;
        fptr[19] = deleteNode2;
        fptr[20] = displaylinkList2;
	fptr[21] = merge;
	fptr[22] = dspMerge;
        fptr[23] = creatNode2;
	printf("%s : Begin\n", __func__);
	return 0;
}
