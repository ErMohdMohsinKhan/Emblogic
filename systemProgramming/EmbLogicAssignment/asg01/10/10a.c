#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char var_name[60];
	char var_value[255];
	int overwritten_value;
	memset(var_name, '\0', 60);
	printf("%s : %s : Begin\n", __FILE__, __func__);
	printf("%s : %s : Enter the variable name\n", __FILE__, __func__);
	scanf("%s", &var_name);
	printf("%s : %s : Enter the variable value\n", __FILE__, __func__);
	scanf("%s", &var_value);
	printf("%s : %s : Enter the Over-written value\n", __FILE__, __func__);
	scanf("%d", &overwritten_value);
	int status = setenv(var_name, var_value, overwritten_value);
	if (status == 0)
	{
		printf("%s : %s : Environment variable created Successfully\n", __FILE__, __func__);
	}
	if (status == -1)
	{
		printf("%s : %s : Environment variable created Failed\n", __FILE__, __func__);
	}

	printf("%s : %s : Entered variable is : %s\n", __FILE__, __func__, var_name);
	//system("echo $var_name");
	char shell_command[100];
    	sprintf(shell_command, "echo $%s", var_name);
    	system(shell_command);
	printf("\n");
	printf("%s : %s : End\n", __FILE__, __func__);
	return 0;
}

/*The sprintf function is used to format a string into the character array "shell_command". It works similarly to printf, but instead of printing to the standard output, it prints the formatted string into the specified buffer.
"echo $%s" where %s is a placeholder for a string, and we're providing var_name as the value to replace %s. The formatted string is then stored in the shell_command array. */

/*The system function is used to execute shell commands. It takes a single argument, which is the command we want to execute as a string.

In this line, we are passing the shell_command array to the system function. The function will then execute the command stored in shell_command, which in this case is the command to print the value of the environment variable named by var_name.*/
