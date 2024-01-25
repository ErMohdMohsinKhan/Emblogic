#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int main (void)
{
	gD1 da;
	gD2 db;
	addDist ds;
	printf("%s : Begin\n", __func__);
	da = getDistance1();
	db = getDistance2();
	ds = addDistance(da, db);
	displayDistance(da, db, ds);
	printf("%s : End\n", __func__);
	return 0;
}
