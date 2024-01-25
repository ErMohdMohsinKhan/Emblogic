#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int main (void)
{
	gdfi da;
	gdcm db;
	printf("%s : Begin\n", __func__);
	da = getDistance();
	db = convertDistance(da);
	displayDistance(da, db);
	printf("%s : End\n", __func__);
	return 0;
}
