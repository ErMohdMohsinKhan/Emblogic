#include "headers.h"
#include "class.h"
#include "declarations.h"
int Stack::creatStack()
{
        cout<<__FILE__<<" : Begin"<<endl;
        stackArray = new int[SIZE];
        if(!stackArray)
        {
                cerr<<"ERROR : Memory Allocation is Failed"<<endl;
        }
        memset(stackArray, '\0', sizeof(int)*SIZE);
        cout<<__FILE__<<" : Memory is successfully allocated"<<endl;
        cout<<__FILE__<<" : End"<<endl;
	return 0;
}
