#include <iostream>
using namespace std;
/*This code extends the previous example by introducing a pointer 'p' to the 'Rectangle' structure. An instance of the structure 'r' is created and initialized with values (10 for length, 5 for breadth). The pointer 'p' is then assigned the address of 'r'. The program accesses the length and breadth of the rectangle through the pointer 'p' using the '->' operator and outputs the values using cout.*/

int main ()
{
	struct Rectangle
	{
		int length;
		int breadth;
	};
	Rectangle r = {10,5};
	Rectangle *p = &r;
	cout<<"Length : "<<p->length<<endl;
	cout<<"Breadth : "<<p->breadth<<endl;
	return 0;
}
