#include "headers.h"
#include "class.h"
int main()
{
	Distance d1(15, 6.5);
	Distance d2, d3;
	cout<<"d1 : ";d1.display();
	cout<<endl;
	cout<<"d2 : ";d2.display();
	cout<<endl;

	d2 = d1(10, 5.6);
	cout<<"d1 : ";d1.display();
	cout<<endl;
	cout<<"d2 : ";d2.display();
	cout<<endl;
	d3 = d1(12, 6.6, 30);
	cout<<"d1 : ";d1.display();
	cout<<endl;
	cout<<"d3 : ";d2.display();
	cout<<endl;
	return 0;
}
