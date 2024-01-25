#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int displayDistance (gD1 da, gD2 db, addDist ds)
{
	printf("%s : Begin\n", __func__);
	printf("%s : %d\' %.2f\" + %d\' %.2f\" = %d\' %.2f\"\n",__func__, da.feet, da.inch, db.feet, db.inch, ds.feet, ds.inch);
	printf("%s : End\n", __func__);
	return 0;
}
