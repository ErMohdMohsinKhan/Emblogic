#include "headers.h"
#include "classes.h"
Distance::Distance(float in)
{
	cout<<__func__<<" : Begin : Two (Argument Constructor)"<<endl;
	feet = in/12;
	inch = in - (feet*12);
	cout<<__func__<<" : End : Two (Argument Constructor)"<<endl;
}
