#ifndef NOF
#define NOF 6 
#endif
extern int val;
int init();
extern void* mainMenu (void*);
extern void* exitProg (void*);
extern void* creatLinkList (void*);
extern void* creatNode (void*);
extern void* insertNode (void*);
extern void* displaylinkList (void*);
extern void* copyll (void*);


extern void* (*fptr[NOF])(void*);
