#include "headers.h"
#include "class.h"

Rectangle Rectangle::operator+(const Rectangle r)const
{
	int l;
	int b;
	l = r.length + length;
	b = r.breadth + breadth;
	return Rectangle(l, b);
}
