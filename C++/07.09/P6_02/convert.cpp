#include "headers.h"
#include "class.h"
DistMeter operator = (DistFeet d1, DistMeter d2) //add d1 to d2
{
	float totalCm = d1.feet * 30.48 + d1.inch * 2.54;
	d2.meter = totalCM / 100;
	d2.cmeter = totalCM - (d2.meter * 100);
	return d2;
//return new Distance with sum
}
