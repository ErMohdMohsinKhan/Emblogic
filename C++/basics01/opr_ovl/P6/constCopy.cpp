#include "headers.h"
#include "class.h"

Distance::Distance(Distance &d)
{
	cout<<"Copy Const"<<endl;
	feet = d.feet;
	inch = d.inch;
}
