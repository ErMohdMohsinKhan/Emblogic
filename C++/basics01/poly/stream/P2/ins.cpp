#include "headers.h"
#include "class.h"

ostream& operator<< (ostream& s, const Distance &d)
{
	cout<<"Feet : "<<d.feet<<" Inches : "<<d.inch;
	return s;
}
