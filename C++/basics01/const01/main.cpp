#include "headers.h"
#include "classes.h"
int main (void)
{
	cout<<__func__<<" : Begin"<<endl;
	Distance d1(8, 8.88);
	Distance d2, ds;
	d1.display();
	d2.display();
	ds.display();
	d2.getDistance();
	d2.display();
	ds = d1.addDistance(d2);
	ds.display();
	cout<<__func__<<" : End"<<endl;
}
