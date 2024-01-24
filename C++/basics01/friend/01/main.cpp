#include "headers.h"
#include "class.h"

int main()
{
	//DistFeet a0(7,7.77), c0;
	DistFeet d0;
	//DistFeet b0(a0);
	DistMeter e0, c0;
//	DistMeter f0(7, 85.6);

	cout<<__func__<<": Begin"<<endl;
	//cout<<"a0:";a0.displayDistFeet();cout<<endl;
	//cout<<"b0:";b0.displayDistFeet();cout<<endl;
	//cout<<"c0:";c0.displayDistFeet();cout<<endl;
	//cout<<"d0:";d0.displayDistFeet();cout<<endl;

	cout<<"e0:";e0.displayDistMeter();cout<<endl;
	//cout<<"f0:";f0.displayDistMeter();cout<<endl;

	d0.getDistFeet();
	//c0.addDistFeets(a0, b0);

	/*a0.displayDistFeet();
	cout<<"+";
	b0.displayDistFeet();
	cout<<"=";
*/
	e0 = convert(d0, e0); //invoking friend function
	d0.displayDistFeet();
	cout<<" is equal to -->";
	e0.displayDistMeter();
	cout<<endl;
	cout<<__func__<<": End"<<endl;
}
