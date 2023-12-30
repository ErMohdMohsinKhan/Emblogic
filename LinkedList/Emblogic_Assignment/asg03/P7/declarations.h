#include "dataStructures.h"
extern Node *start;
extern Node *start2;
extern int choice;
int init();
extern Node* mainMenu (Node*);
extern Node* (*mM) (Node*);
extern Node* creatLinkList(Node*);
extern Node* (*ctLL)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern void display(Node *);
extern void (*dsp)(Node *);
extern void search(Node *);
extern void (*sch)(Node *);
extern void delt(Node *);
extern void (*del)(Node *);
