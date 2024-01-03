#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int glob1, glob2;
int func2()
{
	int f2_local1, f2_local2;
	printf("func2_local:\n\t%p,\n\t%p\n", &f2_local1, &f2_local2);
}
int func1()
{
	int f1_local1, f1_local2;
	printf("func1_local : \n\t%p,\n\t%p\n", &f1_local1, &f1_local2);
	func2();
	return 0;
}
int main (void)
{
	int m_local1, m_local2;
	int *dynamic_addr;
	printf("main_local:\n\t%p,\n\t%p\n", &m_local1, &m_local2);
	func1();
	dynamic_addr = malloc(16);
	printf("Dynamic : \n\t%p\n", dynamic_addr);
	printf("global : \n\t%p,\n\t%p\n", &glob1, &glob2);
	printf("Functions : \n\t%p,\n\t%p\n\t%p\n", main, func1, func2);
	free(dynamic_addr);
	return 0;
}
