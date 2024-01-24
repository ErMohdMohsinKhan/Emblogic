#include "headers.h"
#include "class.h"

int main()
{
	Circle c1(2);
	Circle c2 = c1;
	cout<<"C1 : ";c1.display();
	cout<<endl;
	cout<<"C2 : ";c2.display();
	cout<<endl;
	Circle c3;
	c3 = c1+c2;
	cout<<"C3 : ";c3.display();
	cout<<endl;
	return 0;
}
