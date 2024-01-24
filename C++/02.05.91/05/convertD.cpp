#include "headers.h"
#include "class.h"

Convert::~Convert()
{
	cout<<"Begin->De-constructor"<<endl;
	number = 0;
	delete ptr;
 
	cout<<"End->De-constructor"<<endl;
}
