#include "headers.h"
#include "class.h"

int main ()
{
	cout<<__func__<<" : Begin"<<endl;
	Distance d1(5, 6.54);
	Distance d2, d3;
	cout<<"d1 : ";
	d1.display();
	cout<<endl;
	cout<<"d2 : ";
	d2.display();
	cout<<endl;
	cout<<"d3 : ";
	d3.display();
	cout<<endl;
	cout << "Enter distance in feet/inch : "<<endl;
	cin >> d2 >> d3;
	/*d2 = d1;
	cout<<"d2 : ";
	d2.display();
	cout<<endl;*/
	cout<<d1<<endl<<d2<<endl<<d3<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
