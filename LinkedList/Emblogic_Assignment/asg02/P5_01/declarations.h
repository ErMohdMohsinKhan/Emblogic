#include "dataStructures.h"
extern Node *start;
extern Stack *start2;
extern int choice;
int init();
extern Node* creatLinkList(Node*);
extern Node* (*ctLL)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern void display(Node *);
extern void (*dsp)(Node *);
extern void creatStack (Stack*);
extern void (*ctSk) (Stack*);
extern void pushElement (Stack*);
extern void (*psEl) (Stack*);
extern void popElement (Stack*);
extern void (*ppEl) (Stack*);
extern void displayStack (Stack*);
extern void (*dpSk) (Stack*);
