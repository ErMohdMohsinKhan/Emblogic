#include "headers.h"
#include"dataStruct.h"
#include "declarations.h"
void* exitProg(void*);
void* mainMenu(void*);
void* creatLinkedlist(void*);
void* insertNodeMenu(void*);
void* creatNode(void*);
void* deleteNodeMenu(void*);
void* display(void*);
void* insertNodeBeg(void*);
void* insertNodeEnd(void*);
void* insertNodeNp(void*);
void* insertNodeKy(void*);
void* deleteNodeBeg(void*);
void* deleteNodeEnd(void*);
void* deleteNodeNp(void*);
void* deleteNodeKy(void*);

void* sortAsc(void*);
void* sortDsc(void*);
void* findSml(void*);
void* findLar(void*);
void* prtNEnd(void*);
void* rev(void*);
void* cirLl(void*);
void* (*fptr[NOF])(void*);
int init(void)
{
	printf("%s : %s : Begin\n", __FILE__, __func__);
	fptr[0] = exitProg;
	fptr[1] = mainMenu;
	fptr[2] = creatLinkedlist;
	fptr[3] = insertNodeMenu;
	fptr[4] = deleteNodeMenu;
	fptr[5] = display;
	fptr[6] = creatNode;
	fptr[7] = insertNodeBeg;
	fptr[8] = insertNodeEnd;
	fptr[9] = insertNodeNp;
	fptr[10] = insertNodeKy;
	fptr[11] = deleteNodeBeg;
	fptr[12] = deleteNodeEnd;
	fptr[13] = deleteNodeNp;
	fptr[14] = deleteNodeKy;

	fptr[15] = sortAsc;
	fptr[16] = sortDsc;
	fptr[17] = findSml;
	fptr[18] = findLar;
	fptr[19] = prtNEnd;
	fptr[20] = rev;
	fptr[21] = cirLl;
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
