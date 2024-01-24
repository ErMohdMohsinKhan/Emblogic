#include <iostream>
#include "classes.h"
using namespace std;

int Distance::addDistances(Distance da, Distance db)
{
	cout<<__func__<<" : Begin"<<endl;
	feet = da.feet + db.feet;
	inch = da.inch + db.inch;
	if (inch >= 12)
	{
		inch = inch - 12;
		feet++;
	}
	cout<<__func__<<" : End"<<endl;
	return 0;
}
