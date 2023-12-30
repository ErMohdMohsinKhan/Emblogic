#ifndef NOF
#define NOF 3
#endif
int init();
extern void* exitProg(void*);
extern void* mainMenu(void*);
extern void* creatStack (void*);
extern void* pushElement (void*);
extern void* popElement (void*);
extern void* displayStack (void*);
extern void* flushStack (void*);
extern void* destroyStack (void*);
extern void* inEl(void*);
extern void* (*fptr[NOF])(void*);
