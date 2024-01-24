#include "headers.h"
#include "class.h"

Counter Counter::operator++()
{
	cout<<"Prefix"<<endl;
	return Counter(++count);
}
