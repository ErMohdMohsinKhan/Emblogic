#ifndef NOF
#define NOF 7 
#endif
int init();
extern void* mainMenu(void*);
extern void* creatQueue(void*);
extern void* enqueue(void*);
extern void* dequeue(void*);
extern void* display(void*);
extern void* clear(void*);
extern void* destroy(void*);
extern void* (*fptr[NOF])(void*);
