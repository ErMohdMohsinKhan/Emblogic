#ifndef NOF
#define NOF 6 
#endif
int init();
extern void* exitProg(void *);
extern void* mainMenu(void *);
extern void* creatPriorityQueue(void *);
extern void* enqueue(void *);
extern void* dequeue(void *);
extern void* display(void *);
extern void* destroy(void *);
extern void* (*fptr[NOF])(void *);
