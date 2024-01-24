#include "headers.h"
#include "class.h"

int main()
{
	Rectangle r1(5, 3);
	Rectangle r2 = r1;
	r1.display();
	cout<<endl;
	r2.display();
	cout<<endl;
	Rectangle r3;
	r2.display();
	cout<<endl;
	r3 = r2+r1;
	r3.display();
	cout<<endl;
	return 0;
}
