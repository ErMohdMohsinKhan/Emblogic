#include "headers.h"
#include "class.h"

int main()
{
	Square r1(5);
	Square r2 = r1;
	cout<<"r1 : "<<r1.display();
	cout<<endl;
	cout<<"r2 : "<<r2.display();
	cout<<endl;
	Square r3;
	cout<<"r3 : "<<r3.display();
	cout<<endl;
	r3 = r2+r1;
	cout<<"r3 : "<<r3.display();
	cout<<endl;
	return 0;
}
