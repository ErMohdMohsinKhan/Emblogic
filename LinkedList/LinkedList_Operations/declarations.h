#ifndef NOF
#define NOF 22 
#endif
int init();
extern void* exitProg(void*);
extern void* mainMenu(void*);
extern void* creatLinkedlist(void*);
extern void* insertNodeMenu(void*);
extern void* creatNode(void*);
extern void* deleteNodeMenu(void*);
extern void* display(void*);
extern void* insertNodeBeg(void*);
extern void* insertNodeEnd(void*);
extern void* insertNodeNp(void*);
extern void* insertNodeKy(void*);
extern void* deleteNodeBeg(void*);
extern void* deleteNodeEnd(void*);
extern void* deleteNodeNp(void*);
extern void* deleteNodeKy(void*);
extern void* sortAsc(void*);
extern void* sortDsc(void*);
extern void* findSml(void*);
extern void* findLar(void*);
extern void* prtNEnd(void*);
extern void* rev(void*);
extern void* cirLl(void*);
extern void* (*fptr[NOF])(void*);
