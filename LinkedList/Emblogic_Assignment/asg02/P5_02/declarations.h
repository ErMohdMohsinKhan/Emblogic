#include "dataStructures.h"
extern Node *start;
extern Stack *start2;
extern int choice;
int init();
extern Node* creatLinkList(Node*);
extern Node* (*ctLL)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern int display(Node *);
extern int (*dsp)(Node *);
extern void creatStack (Stack*, Node*, int);
extern void (*ctSk) (Stack*, Node*, int);
extern void pushElement (Stack*, Node*);
extern void (*psEl) (Stack*, Node*);
extern void popElement (Stack*);
extern void (*ppEl) (Stack*);
extern void displayStack (Stack*);
extern void (*dpSk) (Stack*);
