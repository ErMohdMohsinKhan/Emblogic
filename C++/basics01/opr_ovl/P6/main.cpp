#include "headers.h"
#include "class.h"

int main()
{
	Distance d1;
	Distance d2(6.65);
	Distance d3(8, 9.99);
	Distance ds(d1);
	cout<<__func__<<" : Begin"<<endl;
	d1.getDistance();
	cout<<"d1 : "<<d1.showDistance()<<endl;
	cout<<"d2 : "<<d2.showDistance()<<endl;
	cout<<"d3 : "<<d3.showDistance()<<endl;
	cout<<"d3 : "<<d3.showDistance()<<endl;
	
	ds = d1+d2;
	cout<<"ds : "<<ds.showDistance()<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
