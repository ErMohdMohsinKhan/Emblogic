#include "headers.h"
#include "class.h"


void Roots::getroots()
{
	x1 = (b*b) - 4*a*c;
	x1 = sqrt(x1);
	x2 = x1;
	if(x1 == 0)
	{
		x1 = -b/(2*a);
		cout<<"Roots are :"<<"Root 1 : "<<x1<<" Root 2 : "<<x1<<endl;;
	}
	else if (x1 > 0)
	{
		x1 = (-b + x1)/(2*a);
		x2 = (-b - x2)/(2*a);
		cout<<"Roots are :"<<"Root 1 : "<<x1<<" Root 2 : "<<x2<<endl;;
	}
	else if(x1<0)
	{
		x1 = (-b + x1)/(2*a);
		x2 = (-b - x2)/(2*a);
		cout<<"Roots are :"<<"Root 1 : "<<x1<<" Root 2 : "<<x2<<endl;
	}
}
