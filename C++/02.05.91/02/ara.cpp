#include "headers.h"
#include "class.h"

void Circle::ara()
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<rad<<endl;
	cout<<pi<<endl;
	cout<<__func__<<" : End"<<endl;
	area = pi*rad*rad;
}
