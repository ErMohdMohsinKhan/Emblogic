#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
int choice;
int count;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
void delFo(Node*);
void (*dF) (Node*);
void delLs(Node*);
void (*dL) (Node*);
void delAc(Node*);
void (*dA) (Node*);

int init()
{
	start = NULL;
	start2 = NULL;
	choice = '\0';
	printf("%s : Begin\n", __func__);
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
	dF = delFo;
	dL = delLs;
	dA = delAc;
	printf("%s : End\n", __func__);
	return 0;
}
