#include "headers.h"
#include "class.h"

Rectangle::Rectangle(Rectangle& c)
{
	cout<<"Zero Argument Constructor"<<endl;
	length = c.length;
	breadth = c.breadth;
}
