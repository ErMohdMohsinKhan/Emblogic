#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int view (student *st,  int numStudents)
{
	printf("%s : Begin\n", __func__);
	if (st != NULL)
	{
	printf("\n----------------------------------------------------------------------------------------\n");
	printf("R.No.\tName\t\tSex\tQuiz1\tQuiz2\tAssg\tMidTerm\t Final\tTotal\n");
	printf("----------------------------------------------------------------------------------------\n");
	for (int i = 0; i < numStudents; i++)
	{
	printf("%3d\t%s\t %c\t %.1f\t %.1f\t%.1f\t %.1f\t %.1f\t %.1f\n", st[i].stnumber, st[i].stname, st[i].sex, st[i].quiz1, st[i].quiz2, st[i].assignment, st[i].midterm, st[i].fin, st[i].total);
	}
	printf("----------------------------------------------------------------------------------------\n\n");
	}
	
	else
	{
		printf("%s : No Records to show\n", __func__);
	}
	printf("%s : End\n", __func__);
	return 0;
}
