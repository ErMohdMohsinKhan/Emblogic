#include "headers.h"
#include "class.h"
//int Distance::count=0;
int main ()
{
	Distance d1(80.88); //One argument constructor
	Distance d2(10, 5.88); //Two argument constructor
	Distance ds; //Zero argument Constructor
	d1.display();
	cout<<endl;
	d2.display();
	cout<<endl;
	ds.display();
	cout<<endl;

	d2.getDistance();
	d2.display();
        cout<<endl;
	

	ds = d1.addDistance(d2);

	d1.display();
        cout<<" + ";
        d2.display();
        cout<<" = ";
        ds.display();
        cout<<endl;
}
