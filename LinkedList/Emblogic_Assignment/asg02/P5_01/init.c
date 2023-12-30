#include "headers.h"
#include "declarations.h"

Node *start;
Stack *start2;
int choice;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
void creatStack (Stack*);
void (*ctSk) (Stack*);
void pushElement (Stack*);
void (*psEl) (Stack*);
void popElement (Stack*);
void (*ppEl) (Stack*);
void displayStack (Stack*);
void (*dpSk) (Stack*);

int init()
{
	start = NULL;
        start2 = NULL;
        choice = '\0';
	printf("%s : Begin\n", __func__);
	ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	ctSk = creatStack;
	psEl = pushElement;
	ppEl = popElement;
	dpSk = displayStack;
	printf("%s : End\n", __func__);
	return 0;
}
