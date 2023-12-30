#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
int count;
int choice;
Node* mainMenu (Node*);
Node* (*mM) (Node*);
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);

void nLast(Node *);
void (*nLs) (Node *);

int init()
{
        start = NULL;
        start2 = NULL;
        choice = '\0';
	count = 0;
        printf("%s : Begin\n", __func__);
	mM = mainMenu;
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	nLs = nLast;
        printf("%s : End\n", __func__);
        return 0;
}

