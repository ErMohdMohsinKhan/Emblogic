#include "headers.h"
#include "class.h"

int Rectangle::operator< (const Rectangle ra) const
{
	Rectangle r1(ra.length, ra.breadth);
	Rectangle r2(length, breadth);
	r1.area = ra.length * ra.breadth;
	r2.area = length * breadth;
	cout<<"Area of Rectangle1 : "<<r2.area<<endl;
	cout<<"Area of Rectangle2 : "<<r1.area<<endl;
	if(r2.area > r1.area)
	{
		cout<<"Rectangle 1 is bigger ";
	}
	else
	{
		cout<<"Either Both rectangles are equal or Rectangle 2 is bigger ";
	}
		
	return 0;
}
