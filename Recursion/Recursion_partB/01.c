#include <stdio.h>
// This C program demonstrates the use of a recursive function and a static/global variable.
int x=0;  //Global variable declaration
int fun (int); // Function prototype
int main ()
{
	int a = 5; // Local variable initialization
	printf("Value : %d\n", fun(a));
	return 0;
}
// Recursive function definition
int fun (int n)
{
	//static int x = 0;
	if(n > 0)
	{
		x++;
		return fun(n-1) + x;
	}
	else
		return 0;
}
