typedef struct node
{
	struct node *next;
	int data;
}Node;

struct nodee
{
	Node *LL;
	int val;
};
extern int sum;

#ifndef NOF
#define NOF 6
#endif

#ifndef NOFF
#define NOFF 1 
#endif

int init();
extern void* createLL(void *);
extern void* insertNode(void *);
extern void* insertNodeValue(void *);
extern void* displayNode(void *);
extern void* sumLL(void *);
extern void* revLL(void *);

extern void* (*fptr[NOF])(void*);
extern void* (*fnptr[NOFF])(void*);
