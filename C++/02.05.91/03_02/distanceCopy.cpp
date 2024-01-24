#include "headers.h"
#include "class.h"

Distance::Distance(const Distance &obj)
{
	cout<<": Begin Copy constructor"<<endl;
	x = obj.x + 1.25;
	y = obj.y + 2.24;
	cout<<": End Copy constructor"<<endl;
}
