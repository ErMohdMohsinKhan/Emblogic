#include "headers.h"
#include "class.h"

Circle Circle::operator+(const Circle r2) const
{
	int r3;
	r3 = r2.rad + rad;
	return Circle(r3);
}
