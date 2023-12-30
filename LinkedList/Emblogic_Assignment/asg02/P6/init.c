#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
int choice;
//int* ptr;
int arr[2];
void getNo(void);
void (*gtNo)(void);
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);

int init()
{
        start = NULL;
        start2 = NULL;
        choice = '\0';
	arr[0] = arr[1] = '\0';
        printf("%s : Begin\n", __func__);
	gtNo = getNo;
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
        printf("%s : End\n", __func__);
        return 0;
}

