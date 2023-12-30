#include "dataStructures.h"
static int choice;
int init();
extern Node* mainMenu (Node*);
extern Node* (*mM) (Node*);
extern Node* creatLinkList(Node*);
extern Node* (*ctLL)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern void display(Node *);
extern void (*dsp)(Node *);
extern void left_rotate(Node*);
extern void (*lrt)(Node*);
extern void right_rotate(Node*);
extern void (*rrt)(Node*);
