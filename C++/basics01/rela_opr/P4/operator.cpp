#include "headers.h"
#include "class.h"

bool String::operator!=(const String s) const
{
	cout<<"Bool Operator"<<endl;
	return (strcmp(str, s.str) != 0) ? true : false;
}
