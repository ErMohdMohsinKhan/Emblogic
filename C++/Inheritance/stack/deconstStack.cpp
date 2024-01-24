#include "headers.h"
#include "class.h"
#include "declarations.h"
Stack::~Stack()
{
	cout<<__func__<<" : Begin"<<endl;
	/*delete [] stackArray;
	if(!stackArray)
	{
		cerr<<"ERROR : Memory Freed is Failed"<<endl;
	}
	cout<<__func__<<" : Allocated memory is freed"<<endl; */
	cout<<__func__<<" : End"<<endl;
}
