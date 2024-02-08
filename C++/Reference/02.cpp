#include<iostream>
using namespace std;
/* This code demonstrates that a reference, once initialized, becomes an alias to the variable it was originally bound to. In this example, 'r' is initially bound to 'a', and even though we later assign 'b' to 'r', it actually updates the value of 'a', as 'r' remains an alias for 'a'. */

int main ()
{
	int a = 10;
	int &r = a; 
	cout<<"Value of a : "<<a<<endl;
	cout<<"Value of r : "<<r<<endl;
	int b = 20;
	r = b;
	cout<<"Updated value of a : "<<a<<endl;
	cout<<"Updated value of r : "<<r<<endl;
	return 0;
}
