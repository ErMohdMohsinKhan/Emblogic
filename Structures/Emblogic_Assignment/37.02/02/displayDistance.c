#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int displayDistance (gdfi da, gdcm db)
{
	printf("%s : Begin\n", __func__);
	printf("%s : %2d\' %.2f\" = %2dm %.2f cm\n",__func__, da.feet, da.inch, db.m, db.cm);
	printf("%s : End\n", __func__);
	return 0;
}
