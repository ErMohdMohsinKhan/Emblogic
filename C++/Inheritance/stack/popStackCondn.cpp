#include "headers.h"
#include "class.h"
#include "declarations.h"
int StackCondn::pop()
{
	cout<<__func__<<" : Begin"<<endl;
	if(stackTop <= -1)
	{
		cout<<__func__<<" : Stack is emptied"<<endl;
		return 1;
	}
	StackImp::pop();
	cout<<__func__<<" : End"<<endl;
	return 0;
}
