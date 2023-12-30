#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
Node* mainMenu (Node*);
Node* (*mM) (Node*);
int choice;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
int isSorted(Node*);
int (*iS) (Node*);

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
        iS = isSorted;
        printf("%s : End\n", __func__);
        return 0;
}
