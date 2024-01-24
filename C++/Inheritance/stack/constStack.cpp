#include "headers.h"
#include "class.h"
#include "declarations.h"
Stack::Stack()
{
	cout<<__func__<<" : Begin"<<endl;
	stackTop = -1;
	stackArray = NULL;
	cout<<__func__<<" : End"<<endl;
}
