#include "headers.h"
#include "class.h"

int main()
{
	DistFeet d0;
	DistMeter e0, c0;

	cout<<__func__<<": Begin"<<endl;
	cout<<"e0:";e0.displayDistMeter();cout<<endl;

	d0.getDistFeet();
	//e0 = convert(d0, e0); //invoking friend function
	d0=e0;
	d0.displayDistFeet();
	cout<<" is equal to -->";
	e0.displayDistMeter();
	cout<<endl;
	cout<<__func__<<": End"<<endl;
	return 0;
}
