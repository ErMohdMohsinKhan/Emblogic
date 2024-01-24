#include "headers.h"
#include "class.h"

distKM distKM::convert()
{
	distKM d;
	meters = meters +  (miles * 1609.34);
	cout<<"Meters : "<<meters<<endl;
	d.miles = meters/1000;	
	cout<<"KM : "<<miles<<endl;
	d.meters = meters - (d.miles*1000);
	cout<<"Meters : "<<meters<<endl;
	return d;
}
