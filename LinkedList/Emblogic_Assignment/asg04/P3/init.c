#include "headers.h"
#include "declarations.h"

Node* mainMenu (Node*);
Node* (*mM) (Node*);
static int choice;
int count;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
void sort(Node *);
void (*srt)(Node *);

int init()
{
        choice = '\0';
	count = 0;
        printf("%s : Begin\n", __func__);
        mM = mainMenu;
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	srt = sort;
        printf("%s : End\n", __func__);
        return 0;
}
