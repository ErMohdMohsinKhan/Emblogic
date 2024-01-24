#include"headers.h"
#include"class.h"

int Box::cmp(Box b)
{
	cout<<__func__<<"Begin"<<endl;
	Volume = length*breadth*height;
	cout<<"Volume : "<<Volume<<endl;
	b.Volume = b.length*b.breadth*b.height;
	cout<<"Volume : "<<b.Volume<<endl;
	if(this->Volume > b.Volume)
		return 1;
	else
		return 0;
}
