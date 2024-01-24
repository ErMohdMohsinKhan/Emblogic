#include "headers.h"
#include "classes.h"
Distance Distance::addDistance(Distance db)
{
	cout<<__func__<<" : Begin"<<endl;
	Distance dl;
	dl.feet = feet +  db.feet;
	dl.inch = inch + db.inch;
	if(dl.inch >= 12)
	{
		dl.feet++;
		dl.inch = dl.inch - 12;
	}
	cout<<__func__<<" : End"<<endl;
	return dl;
}

