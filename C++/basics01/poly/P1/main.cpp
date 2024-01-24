#include "headers.h"
#include "class.h"

int main ()
{
	Weight w1;
	Weight w2(4, 6);
	Weight w3 = w2;
	cout<<"w1 : ";
	w1.display();
	cout<<"w2 : ";
	w2.display();
	cout<<"w3 : ";
	w3.display();
	w1 = w2;
	w1.display();
	w2.display();
	return 0;
}
