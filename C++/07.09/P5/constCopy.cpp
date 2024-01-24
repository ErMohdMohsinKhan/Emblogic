#include "headers.h"
#include "class.h"

Rectangle::Rectangle(Rectangle &r3)
{
	cout<<"Copy Consructor"<<endl;
	length = r3.length;
	breadth = r3.breadth;
}
