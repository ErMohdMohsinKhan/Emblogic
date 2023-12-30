#include "dataStructures.h"
static int choice;
extern Node *start;
extern char* inp;
extern Stack *stk;
int init();
extern char* getString(void);
extern char* (*gtSr)(void);
extern Node* creatStack(Node*);
extern Node* (*ctS)(Node*);
extern void pushElement (Node*, char);
extern void (*psEl)(Node*, char); 
extern int popElement (Node*);
extern int (*ppEl)(Node*);
extern void display(Node *);
extern void (*dsp)(Node *);
