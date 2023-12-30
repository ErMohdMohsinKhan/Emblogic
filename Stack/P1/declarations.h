#ifndef NOF
#define NOF 10 
#endif
int init();
extern void* exitProg(void*);
extern void* mainMenu(void*);
extern void* creatStack(void*);
extern void* pushEle(void*);
extern void* popEle(void*);
extern void* peekEle(void*);
extern void* display(void*);
extern void* flushStack (void*);
extern void* destroyStack (void*);
extern void* creatNode(void*);
extern void* (*fptr[NOF])(void*);
