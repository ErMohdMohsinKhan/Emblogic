#include "headers.h"
#include "class.h"

int main()
{
	Rectangle r1(5, 3);
	Rectangle r2;
	r1.display();
	cout<<endl;
	r2.display();
	cout<<endl;
	r2<r1;
	cout<<endl;
	return 0;
}
