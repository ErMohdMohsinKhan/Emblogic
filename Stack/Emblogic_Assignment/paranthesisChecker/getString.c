#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

char *getString()
{
	//printf("%s : Begin\n", __func__);
	char *loc = (char *)malloc(10 * sizeof(char));
	int len;
	printf("Enter a string : \n");
	fgets(loc, 10, stdin);
	len = strlen(loc);
	loc[len - 1] = '\0';
	printf("You entered string : %s\n", loc);
//	printf("%s : End\n", __func__);
	return loc;
}
