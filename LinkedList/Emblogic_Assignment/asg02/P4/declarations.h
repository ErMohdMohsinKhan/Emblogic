#include "dataStructures.h"
extern Node *start;
extern Node *start2;
extern int choice;
extern int count;
int init();
extern Node* creatLinkList(Node*);
extern Node* (*ctLL)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern void display(Node *);
extern void (*dsp)(Node *);
extern void delFo(Node*);
extern void (*dF) (Node*);
extern void delLs(Node*);
extern void (*dL) (Node*);
extern void delAc(Node*);
extern void (*dA) (Node*);
