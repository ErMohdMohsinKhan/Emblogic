#include "headers.h"
#include "declarations.h"

void exit_Func (char *status)
{
	printf("%s : Begin\n", __FILE__);
	if (strncmp ("failure", status, 7) == 0)
		exit (EXIT_FAILURE);
	else if (strncmp ("success", status, 7) == 0)
		exit(EXIT_SUCCESS);
	printf("%s : End\n", __FILE__);
}
