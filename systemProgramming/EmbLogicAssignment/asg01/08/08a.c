#include <stdio.h>
int main(void)
{
	extern char** environ;
	char** environment_list = environ;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	while(*environment_list != NULL)
	{
		printf("%s\n", *environment_list);
		environment_list++;
	}
	printf("%s : %s : Begin\n", __FILE__, __func__);
	return 0;
}
