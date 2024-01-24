#include "headers.h"
#include "class.h"

DistMeter convert(DistFeet dF, DistMeter dM)
{
	cout<<__func__<<": Begin"<<endl;
	dM.cmeter = (((dF.feet*12)+dF.inch)*2.54);
	dM.meter = dM.cmeter/100;
	dM.cmeter = dM.cmeter - (dM.meter*100);
	cout<<__func__<<": End"<<endl;
	return dM;
}
