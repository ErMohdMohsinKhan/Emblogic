#include "headers.h"
#include "class.h"

void DistMeter::getDistMeter()
{
	cout<<__func__<<": Begin"<<endl;
	cout<<"Enter distance in m/cm"<<endl;
	cin>>meter;
	cin>>cmeter;
	cout<<__func__<<": End"<<endl;
}
