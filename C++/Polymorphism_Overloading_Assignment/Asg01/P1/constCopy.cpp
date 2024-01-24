#include "headers.h"
#include "class.h"

Circle::Circle(Circle& c)
{
	cout<<"Zero Argument Constructor"<<endl;
	radius = c.radius;
}
