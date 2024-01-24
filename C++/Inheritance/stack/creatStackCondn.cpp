#include "headers.h"
#include "class.h"
#include "declarations.h"
int StackCondn::creatStack()
{
        cout<<__FILE__<<" : Begin"<<endl;
	if(stackArray)
	{
		cout<<__FILE__<<" : Stack is already created"<<endl;
		return 0;
	}
	Stack::creatStack();
        cout<<__FILE__<<" : End"<<endl;
	return 0;
}
