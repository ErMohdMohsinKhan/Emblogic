#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

gdcm convertDistance (gdfi da)
{
	printf("%s : Begin\n", __func__);
	gdcm db;
	da.inch = da.inch + (da.feet * 12.0);
	db.cm = da.inch * 2.54;
	db.m = db.cm / 100;
       	db.cm = fmod(db.cm, 100);	
	printf("%s : End\n", __func__);
	return db;
}
