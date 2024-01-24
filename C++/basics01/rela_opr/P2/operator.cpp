#include "headers.h"
#include "class.h"

bool String::operator>=(const String s) const
{
	cout<<"Bool Operator"<<endl;
	int len1 = strlen(str);
	cout<<"Len1 : "<<len1<<endl;
	int len2 = strlen(s.str);
	cout<<"Len2 : "<<len2<<endl;
	return (len1 >= len2) ? true : false;
}
