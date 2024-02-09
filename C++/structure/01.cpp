#include <iostream>
using namespace std;
/* This code defines a structure 'Rectangle' with members 'length' and 'breadth'. An instance of the structure is created and initialized with values (10 for length, 5 for breadth). The program then outputs the length and breadth of the rectangle using cout.*/
int main ()
{
	struct Rectangle
	{
		int length;
		int breadth;
	};
	Rectangle r = {10,5};
	cout<<"Length : "<<r.length<<endl;
	cout<<"Breadth : "<<r.breadth<<endl;
	return 0;
}
