#include "headers.h"
#include "class.h"

int Counter::operator++()
{
	cout<<"Operator Overloading Function Invoked"<<endl;
	++count;
	return 0;
}
