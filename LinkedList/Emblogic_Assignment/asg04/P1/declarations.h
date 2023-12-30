#include "dataStructures.h"
static int choice;
extern int count;
int init();
extern Node* mainMenu (Node*);
extern Node* (*mM) (Node*);
extern Node* creatStack(Node*);
extern Node* (*ctS)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern void display(Node *);
extern void (*dsp)(Node *);
extern void middle(Node *);
extern void (*mdl)(Node *);
