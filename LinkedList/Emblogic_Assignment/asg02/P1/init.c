#include "headers.h"
#include "declarations.h"

Node *start;
Node *start2;
int choice;
Node* creatLinkList(Node*);
Node* (*ctLL)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
Node* creatNode2(Node *, Node *);
Node* (*ctNd2)(Node *, Node*);
void display(Node *);
void (*dsp)(Node *);
//void merge(Node *, Node *);
//void (*mrg)(Node *, Node *);
//void sortll(Node*);
//void (*stll)(Node*);
int init()
{
        start = NULL;
        start2 = NULL;
        choice = '\0';
        printf("%s : Begin\n", __func__);
        ctLL = creatLinkList;  // Assign function pointers
        ctNd = creatNode;
        ctNd2 = creatNode2;
        dsp = display;
   //     mrg = merge;
    //    stll = sortll;
        printf("%s : End\n", __func__);
        return 0;
}
