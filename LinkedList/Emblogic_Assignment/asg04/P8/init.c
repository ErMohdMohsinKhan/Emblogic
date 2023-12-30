#include "headers.h"
#include "declarations.h"

Node* mainMenu (Node*);
Node* (*mM) (Node*);
static int choice;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
void middle(Node *);
void (*mdl)(Node *);
void reverse(Node *);
void (*rev)(Node *);

int init()
{
        choice = '\0';
        printf("%s : Begin\n", __func__);
        mM = mainMenu;
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	rev = reverse;
        printf("%s : End\n", __func__);
        return 0;
}
