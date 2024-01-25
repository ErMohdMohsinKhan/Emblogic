#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
int numStudents = 0;
int main (void)
{
	printf("%s : Begin\n", __func__);
	student *st = NULL;
	//int numStudents = 0;
        /*st = (student*) malloc(20 * sizeof(student));
        if (!st)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
		*/
	int ch;
	char res;
	while (1)
	{
	ch = mainMenu();
	switch(ch)
	{
		case 1:
			addRec(&st, &numStudents);
			break;
		case 2:
			delRec(&st, &numStudents);
			break;
		case 3:
			updRec(st, numStudents);
			break;
		case 4:
			view(st, numStudents);
			break;
		case 5:
			agst(&st, &numStudents);
			break;
		case 6:
			maxSc(st, numStudents);
			break;
		case 7:
			minSc(st, numStudents);
			break;
		case 8:
			stdId(st, numStudents);
			break;
		case 9:
			sortTot(&st, &numStudents);
			break;
	}
	printf("%s : Do you want to continue (y/n)\n", __func__);
	scanf(" %c", &res);
	if (res == 'n')
		break;
	}
	free(st);
	printf("%s : End\n", __func__);
	return 0;
}
