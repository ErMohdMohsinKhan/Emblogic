#include "headers.h"
#include "class.h"
#include "declarations.h"
int StackImp::pop()
{
        cout<<__func__<<" : Begin"<<endl;
	cout<<__func__<<" : Value at the top : "<<stackArray[stackTop--]<<endl;
        cout<<__func__<<" : End"<<endl;
	return 0;
}

