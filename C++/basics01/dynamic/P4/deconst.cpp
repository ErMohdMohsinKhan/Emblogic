#include "headers.h"
#include "class.h"
String::~String()
{
	cout<<"Deconstructor"<<endl;
	delete[] str;
}
