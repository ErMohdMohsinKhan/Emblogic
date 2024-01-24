#include "headers.h"
#include "class.h"

Circle::Circle (float rd)
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<__func__<<": One argument constructor"<<endl;
	rad = rd;
	cout<<area<<endl;
	area = 0.0;
	cout<<area<<endl;
	cout<<__func__<<" : End"<<endl;
	
}
