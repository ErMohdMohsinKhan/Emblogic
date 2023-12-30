#include "headers.h"
#include "declarations.h"

char* getString()
{
	int l;
	char *str = (char*)malloc(sizeof(char)*20);
	if(!str)
	{
		perror("malloc");
		exit(1);
	}
	printf("%s : Enter the String\n", __func__);
	fgets(str, 20, stdin);
	l = strlen(str);
	str[l-1] = '\0';
	return str;
}
