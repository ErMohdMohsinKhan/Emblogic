#include "headers.h"
#include "class.h"

istream& operator>> (istream& s, Distance &d)
{
	cout<<"Enter feet "<<endl;
	s>>d.feet;
	cout<<"Enter inch "<<endl;
	s>>d.inch;
	return s;
}
