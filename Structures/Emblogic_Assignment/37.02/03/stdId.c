#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int stdId (student *st, int numStudents)
{
	printf("%s : Begin\n", __func__);
	int res, i, num;
	num = -1;
	printf("%s : Enter the ID number\n", __func__);
	scanf("%d", &res);
	for (i=0; i<numStudents; i++)
	{
		if (res == st[i].stnumber)
		{
			num = i;
			break;	
		}
	}
	if (num != -1)
	{
	printf("%s : Record for Student ID %d\n", __func__, res);
	printf("\n----------------------------------------------------------------------------------------\n");
        printf("R.No.\tName\t\tSex\tQuiz1\tQuiz2\tAssg\tMidTerm\t Final\tTotal\n");
        printf("----------------------------------------------------------------------------------------\n");
	printf("%3d\t%s\t %c\t %.1f\t %.1f\t%.1f\t %.1f\t %.1f\t %.1f\n", st[i].stnumber, st[i].stname, st[i].sex, st[i].quiz1, st[i].quiz2, st[i].assignment, st[i].midterm, st[i].fin, st[i].total);
	}
	else
		printf("%s : No record found with Student ID %d\n", __func__, res);
	printf("%s : End\n", __func__);
	return 0;
}
