#include<iostream>
using namespace std;
/* Reference is another name given to a variable, also called an alias. It is useful in parameter passing in C++, just like pointers in C.  Unlike pointers, references don't consume additional memory. */

int main ()
{
	int a = 10;
	int &r = a;  //Mandatory to initilaize at the time of declaration. Once initialized can't be changed.
	cout<<"Value of a : "<<a<<endl;
	cout<<"Value of r : "<<r<<endl;
	r++;
	cout<<"Updated value of a : "<<a<<endl;
	cout<<"Updated value of r : "<<r<<endl;
	return 0;
}
