#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
int choice;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
int minm(Node *);
int (*mn)(Node *);
int maxm(Node *);
int (*mx)(Node *);

int init()
{
	start = NULL;
	start2 = NULL;
	choice = '\0';
	printf("%s : Begin\n", __func__);
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	mn = minm;
	mx = maxm;
	printf("%s : End\n", __func__);
	return 0;
}
