#include<iostream>
using namespace std;
/* Demonstrates call by address using a 'swap' function to exchange and display values of 'a' and 'b' using XOR operations. */
void swap (int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main () 
{
	int a, b;
	cout<<"Enter values of a and b : "<<endl;
	cin >> a >> b;
	cout<<"Values of a : "<<a<<" and b : "<<b<<endl;
	swap(&a, &b);
	cout<<"Values of a : "<<a<<" and b : "<<b<<endl;
	return 0;
}
