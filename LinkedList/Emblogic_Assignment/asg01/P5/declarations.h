#ifndef NOF
#define NOF 18
#endif
extern int val;
int init();
extern void* mainMenu (void*);
extern void* exitProg (void*);
extern void* creatLinkList (void*);
extern void* creatNode (void*);
extern void* insertNode (void*);
extern void* deleteNode (void*);
extern void* displaylinkList (void*);
extern void* totoccr (void*);
extern void* nonZero (void*);

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

extern void* (*fptr[NOF])(void*);
