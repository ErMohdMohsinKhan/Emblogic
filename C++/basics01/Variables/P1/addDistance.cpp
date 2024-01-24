#include "headers.h"
#include "class.h"

Distance Distance::addDistance(Distance db)
{
	Distance dl;
	cout<<__func__<<" : Begin"<<endl;
	dl.feet = feet + db.feet;
	dl.inch = inch + db.inch;
	if(dl.inch >= 12)
	{
		dl.feet++;
		dl.inch = dl.inch - 12.0;
	}
	cout<<__func__<<" : End"<<endl;
	return dl;
}
