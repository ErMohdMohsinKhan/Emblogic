#include "headers.h"
#include "class.h"

Deviation::~Deviation()
{
	cout<<"Begin (Zero Arg De-constructor)"<<endl;
	delete ptr;
	cout<<"End (Zero Arg De-constructor)"<<endl;
}
