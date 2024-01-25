#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int maxSc (student *st, int numStudents)
{
	printf("%s : Begin\n", __func__);
	int i =0;
	int var = 0;
	float highest = (st)[0].total;
	char name[20];
	for (i=1; i<numStudents; i++)
	{
		if (highest < (st)[i].total)
		{
			highest = (st)[i].total;
			var = i;
		}
	}
	
	printf("%s : Highest total is %.2f of %s\n", __func__, highest, (st)[var].stname);
	printf("%s : End\n", __func__);
	return 0;
}
