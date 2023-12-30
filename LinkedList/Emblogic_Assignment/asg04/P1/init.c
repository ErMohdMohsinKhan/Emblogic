#include "headers.h"
#include "declarations.h"

Node* mainMenu (Node*);
Node* (*mM) (Node*);
static int choice;
int count;
Node* creatStack(Node*);
Node* (*ctS)(Node*);
Node* creatNode(Node *);
Node* (*ctNd)(Node *);
void display(Node *);
void (*dsp)(Node *);
void middle(Node *);
void (*mdl)(Node *);

int init()
{
        choice = '\0';
        printf("%s : Begin\n", __func__);
        mM = mainMenu;
        ctS = creatStack;  // Assign function pointers
        ctNd = creatNode;
        dsp = display;
        printf("%s : End\n", __func__);
        return 0;
}
