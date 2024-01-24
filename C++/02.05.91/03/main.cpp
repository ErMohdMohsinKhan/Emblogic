#include "headers.h"
#include "class.h"

int main()
{
	cout<<__func__<<": Begin"<<endl;
	Distance d1(25.45, 65.4);
	Distance d2(30.45, 15.4);
	Distance ds;
	d1.display();
	cout<<endl;
	d2.display();
	cout<<endl;
	//ds = d1.caldst(d2);
	 // Use the setter method to set ds.x
    ds.setX(d1.caldst(d2));

    // Use the getter method to retrieve ds.x
    cout << ds.getX();
    cout << endl;

	cout<<__func__<<": End"<<endl;
	return 0;
}
