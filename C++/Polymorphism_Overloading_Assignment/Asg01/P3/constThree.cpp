#include "headers.h"
#include "class.h"

Time::Time(int h, int m, int s)
{
	cout<<"Enter time (mm:hr:sec) "<<endl;
	hr = h;
	min = m;
	sec = s;
}
