#include "headers.h"
#include "class.h"

Square Square::operator+(const Square r)const
{
	/*int l;
	int b;
	l = r.length + length;
	b = r.breadth + breadth;*/
	int a;
	a = r.area + area;
	return Square(a); //Unnamed copy const
}
