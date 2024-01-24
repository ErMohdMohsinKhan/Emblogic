#include "headers.h"
#include "class.h"

Square Square::operator+(const Square r)const
{
	/*int l;
	int b;
	l = r.length + length;
	b = r.breadth + breadth;*/
	int a;
	int s;
	a = r.area + area;
	s = sqrt(a);
	return Square(s); //Unnamed copy const
}
