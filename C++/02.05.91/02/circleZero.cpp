#include "headers.h"
#include "class.h"

Circle::Circle()
{
	cout<<__func__<<" : Begin"<<endl;
	area = 0.0;
	cout<<__func__<<": Enter radius"<<endl;
	cout<<__func__<<" : End"<<endl;
	cin>>rad;
}
