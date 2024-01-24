#include "headers.h"
#include "class.h"

Rectangle Rectangle::operator+ (const Rectangle r) const
{
	int l;
	int b;
	l = length + r.length;
	b = breadth + r.breadth;
	return Rectangle(l, b);
}
