#include "headers.h"
#include "class.h"

Distance::Distance(float dst)
{
	cout<<__func__<<" : Begin : One argument Constructor"<<endl;
	feet = dst/12;
	inch = dst - (feet*12);
	count++;
	cout<<__func__<<" : End : One argument Constructor"<<endl;
}
