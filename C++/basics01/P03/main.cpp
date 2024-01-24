#include <iostream>
#include "classes.h"
using namespace std;
int main ()
{
	Distance d1, d2, ds;
	cout<<__func__<<" : Begin"<<endl;
	d1.getDistance();
	d2.getDistance();
	ds.addDistances(d1, d2);
	ds.display(d1, d2);
	cout<<__func__<<" : End"<<endl;
	return 0;
}
