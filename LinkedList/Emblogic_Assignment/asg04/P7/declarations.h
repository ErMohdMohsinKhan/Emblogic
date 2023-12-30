#include "dataStructures.h"
static int choice;
extern int count;
int init();
extern Node* mainMenu (Node*);
extern Node* (*mM) (Node*);
extern Node* creatLinkList(Node*);
extern Node* (*ctLL)(Node*);
extern Node* creatNode(Node *);
extern Node* (*ctNd)(Node *);
extern void display(Node *);
extern void (*dsp)(Node *);
extern void palindrome(Node*);
extern void (*pld)(Node*);
extern Node* reverse(Node*);
extern Node* (*rev)(Node*);
