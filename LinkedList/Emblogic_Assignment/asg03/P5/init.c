#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
int choice;
Node* mainMenu (Node*);
Node* (*mM) (Node*);
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
void search(Node *);
void (*sch)(Node *);

int init()
{
        start = NULL;
        start2 = NULL;
        choice = '\0';
        printf("%s : Begin\n", __func__);
	mM = mainMenu;
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	sch = search;
        printf("%s : End\n", __func__);
        return 0;
}

