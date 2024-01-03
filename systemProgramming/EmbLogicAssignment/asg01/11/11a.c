#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char var_name[60];
	memset(var_name, '\0', 60);
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : Enter the variable name to be delete\n", __FILE__, __func__);
	scanf("%s", &var_name);
	int status = unsetenv(var_name);
	if (status == 0)
	{
		printf("%s : %s : Environment variable deleted Successfully\n", __FILE__, __func__);
	}
	if (status == -1)
	{
		printf("%s : %s : Unable to delete Environment variable\n", __FILE__, __func__);
	}
	printf("\n");
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
