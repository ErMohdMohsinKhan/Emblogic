#include "headers.h"
#include "class.h"

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
	
	d1.count=111;
	d2.count=222;
	ds.count=333;

	ds = d1.addDistance(d2);

	d1.display();
        cout<<" + ";
        d2.display();
        cout<<" = ";
        ds.display();
        cout<<endl;
}
