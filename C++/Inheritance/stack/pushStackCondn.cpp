#include "headers.h"
#include "class.h"
#include "declarations.h"
int StackCondn::push()
{
	cout<<__func__<<" : Begin"<<endl;
	if(!stackArray)
	{
		cout<<__func__<<" : Stack is not created, please create a stack"<<endl;
		return 1;
	}
	else if(stackTop >= SIZE)
	{
		cout<<__func__<<" : Stack is already Full"<<endl;
		return 1;
	}
	StackImp::push();
	cout<<__func__<<" : End"<<endl;
	return 0;
}
