#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

addDist addDistance (gD1 da, gD2 db)
{
	printf("%s : Begin\n", __func__);
	addDist ds;
	ds.feet = da.feet + db.feet;
	ds.inch = da.inch + db.inch;
	if (ds.inch >= 12.0)
	{
		ds.feet = ds.feet + 1;
		ds.inch = ds.inch - 12.0;
	}
	printf("%s : End\n", __func__);
	return ds;
}
