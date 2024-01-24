#include "headers.h"
#include "class.h"

bool String::operator<=(const String s) const
{
	cout<<"Bool Operator"<<endl;
	int len1 = strlen(str);
	int len2 = strlen(s.str);
	return (len1 <= len2) ? true : false;
}
