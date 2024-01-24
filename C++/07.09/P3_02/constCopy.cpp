#include "headers.h"
#include "class.h"

Square::Square(Square &r3)
{
	cout<<"Copy Consructor"<<endl;
	side = r3.side;
	area = r3.area;
}
