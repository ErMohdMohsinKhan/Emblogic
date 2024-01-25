#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int mainMenu (void)
{
	printf("%s : Begin\n", __func__);

	printf("%s : <<<MENU>>>\n", __func__);

	printf("%s : 1. Add student records\n", __func__);
	printf("%s : 2. Delete student records\n", __func__);
	printf("%s : 3. Update student records\n", __func__);
	printf("%s : 4. View all student records\n", __func__);
	printf("%s : 5. Calculate an average of a selected student's scores\n", __func__);
	printf("%s : 6. Show student who gets the max total scores\n", __func__);
	printf("%s : 7. Show student who gets the min total scores\n", __func__);
	printf("%s : 8. Find student by ID\n", __func__);
	printf("%s : 9. Sort records by total scores\n", __func__);
	
	int choice;
	printf("%s : Enter your choice\n", __func__);
	scanf("%d", &choice);

	printf("%s : End\n", __func__);
	return choice;
}
