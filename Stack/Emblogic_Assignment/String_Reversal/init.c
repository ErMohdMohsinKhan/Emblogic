#include "headers.h"
#include "dataStructures.h"
Node *start;
Stack *stk;
char* inp;
static int choice;
char* getString(void);
char* (*gtSr)(void);
Node* creatStack(Node*);
Node* (*ctS)(Node*);
void pushElement (Node*, char);
void (*psEl)(Node*, char);
int popElement (Node*);
int (*ppEl)(Node*);
void display(Node *);
void (*dsp)(Node *);

int init()
{
        choice = '\0';
	stk = NULL;
	start = NULL;
        printf("%s : Begin\n", __func__);
	gtSr = getString;
        ctS = creatStack;  // Assign function pointers
	psEl = pushElement;
	ppEl = popElement;
        dsp = display;
        printf("%s : End\n", __func__);
        return 0;
}

