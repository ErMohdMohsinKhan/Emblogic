#include <iostream>
using namespace std;
/* This code further extends the previous example by dynamically allocating memory for a 'Rectangle' structure using the 'new' operator. A pointer 'p' is assigned the address of the dynamically allocated structure in the heap section of the memory. The program then sets the 'length' and 'breadth' values through the pointer 'p' and outputs them using cout. Finally, memory allocated for 'p' is released using 'delete' to prevent memory leaks.*/

int main ()
{
	struct Rectangle
	{
		int length;
		int breadth;
	};
	Rectangle *p = new Rectangle;
	p->length = 20;
	p->breadth = 10;
	cout<<"Length : "<<p->length<<endl;
	cout<<"Breadth : "<<p->breadth<<endl;
	delete(p);
	return 0;
}
