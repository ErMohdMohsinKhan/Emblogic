#include "headers.h"
#include "class.h"

distKM convert(distMiles dM, distKM dK)
{
	dK.meters = dM.meters +  (dM.miles * 1609.34);
	cout<<"Total Meters : "<<dK.meters<<endl;
	dK.kms = dK.meters/1000;	
	cout<<"KM : "<<dK.kms<<endl;
	dK.meters = dK.meters - (dK.kms*1000);
	cout<<"Meters : "<<dK.meters<<endl;
	return dK;
}
