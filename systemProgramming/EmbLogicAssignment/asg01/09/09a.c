#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char environment_var[60];
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : Enter the Environment variable name\n", __FILE__, __func__);
	scanf("%s", environment_var);
	printf("%s : %s : Environment Variable : %s\n", __FILE__, __func__, getenv(environment_var));
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}
