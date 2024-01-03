#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("%s : Begin\n", __func__);
	printf("%s : Maximum PID value :  ", __func__);
	fflush(stdout);
	system("cat /proc/sys/kernel/pid_max");
	printf("%s : End\n", __func__);
	return 0;
}

/*When we use output functions like printf to print text to the standard output (usually the terminal), the characters you print are not immediately sent to the terminal. Instead, they are stored in a temporary storage area called a buffer. One of the most common conditions for flushing the buffer and sending its contents to the terminal is encountering a newline character (\n) in the output.*/

/*Without the fflush(stdout); call, the output of the printf is buffered. Since there is no newline character in Line number 7, it's not immediately displayed. Then, the system function executes and its output is sent directly to the terminal. 
 Adding fflush(stdout); explicitly flushes the printf buffer before executing system, ensuring the buffered output is displayed before the output of system*/

