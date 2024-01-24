#include "headers.h"
#include "class.h"
#include "declarations.h"
int StackImp::display()
{
	int count = stackTop;
        cout<<__func__<<" : Begin"<<endl;
	for(count; count>=0; count--)
	{
		cout<<__func__<<" : Value at the Position : "<<count<<" -> "<<stackArray[count]<<endl;
	}	
        cout<<__func__<<" : End"<<endl;
	return 0;
}

