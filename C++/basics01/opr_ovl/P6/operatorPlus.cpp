#include "headers.h"
#include "class.h"

Distance Distance::operator+(const Distance da) const
{
	int ft;
	float in;
	cout<<"Operator Oveloading"<<endl;
	ft = feet + da.feet;
	in = inch + da.inch;
	if(in >= 12.0)
	{
		in -= 12.0;
		ft = ft+1;
	}
	return Distance(ft, in);
}
