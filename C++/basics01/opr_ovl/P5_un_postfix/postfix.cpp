#include "headers.h"
#include "class.h"

Counter Counter::operator++(int)
{
	cout<<"Postfix"<<endl;
	return Counter(count++);
}
