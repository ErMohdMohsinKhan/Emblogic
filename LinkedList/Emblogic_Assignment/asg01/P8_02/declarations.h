#include"dataStructures.h"
#ifndef NOF
#define NOF 24 
#endif
extern int val;
extern Node* start;
extern Node2* start2;
int init();
extern void* mainMenu (void*);
extern void* exitProg (void*);
extern void* creatLinkList (void*);
extern void* creatNode (void*);
extern void* insertNode (void*);
extern void* deleteNode (void*);
extern void* displaylinkList (void*);

extern void* creatLinkList2 (void*);
extern void* creatNode2 (void*);
extern void* insertNode2 (void*);
extern void* deleteNode2 (void*);
extern void* displaylinkList2 (void*);
extern void* merge (void*);
extern void* dspMerge (void*);

extern void* insertMenu (void*);
extern void* insertNodeBeg (void*);
extern void* insertNodeEnd (void*);
extern void* insertNodenP (void*);
extern void* insertNodekV (void*);

extern void* deleteMenu (void*);
extern void* deleteNodeBeg (void*);
extern void* deleteNodeEnd (void*);
extern void* deleteNodenP (void*);
extern void* deleteNodekV (void*);

extern void* mainMenu2 (void*);
extern void* (*fptr[NOF])(void*);
