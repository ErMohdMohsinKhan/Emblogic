#include "headers.h"
#include "class.h"

Distance::Distance(int ft=5, float in=5.54)
{
	cout<<__func__<<" : Begin : Two argument Constructor"<<endl;
	feet = ft;
	inch = in;
	count = 200;
	cout<<__func__<<" : End : Two argument Constructor"<<endl;
}
