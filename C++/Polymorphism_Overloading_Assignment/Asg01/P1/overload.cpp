#include "headers.h"
#include "class.h"

Circle Circle::operator+ (const Circle rad) const
{
	int rl;
	rl = radius + rad.radius;
	return Circle(rl);
}
