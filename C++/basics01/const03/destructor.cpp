#include "headers.h"
#include "classes.h"

Pointer::~Pointer(void)
{
	cout<<__func__<<": Freeing memory!"<<endl;
	delete ptr; 
}
