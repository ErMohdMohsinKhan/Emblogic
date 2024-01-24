#include "headers.h"
#include "class.h"
#include "declarations.h"
int StackImp::push()
{
        cout<<__func__<<" : Begin"<<endl;
        cout<<__func__<<" : Enter the value for Stack"<<endl;
	cin>>(stackArray[++stackTop]);
        cout<<__func__<<" : End"<<endl;
	return 0;
}

