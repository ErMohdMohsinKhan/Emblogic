#include "headers.h"
#include "class.h"

int Rectangle::operator<(const Rectangle r1)const
{
	int a2;
	a2 = length * breadth;
	int a1;
	a1 = r1.length * r1.breadth;
	if(a1 < a2)
	{
		cout<<"c2 is bigger"<<endl;
	}
	else
	{
		cout<<"c1 is bigger"<<endl;
	}
	return 0;	
}
