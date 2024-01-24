#include "headers.h"
#include "class.h"

Rectangle::Rectangle(int l, int b)
{
	cout<<" One Argument Constructor"<<endl;
	length = l;
	breadth = b;
	area = l * b;
}
