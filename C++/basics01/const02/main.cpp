#include "headers.h"
#include "classes.h"
int main (void)
{
	cout<<__func__<<" : Begin"<<endl;
	Distance d1(80.898);
	Distance d2 (15.854);
	Distance ds;
	//d2.getDistance();
	d1.display();
	d2.display();
	ds = d1.addDistance(d2);

	d1.display();
	cout<<" + ";
	d2.display();
	cout<<" = ";
	ds.display();
	cout<<endl;
	cout<<__func__<<" : End"<<endl;
}
