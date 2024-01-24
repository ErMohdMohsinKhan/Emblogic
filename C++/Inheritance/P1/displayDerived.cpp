#include"headers.h"
#include"class.h"
int DerivedClass::display()
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<"Value of derived class's Object : "<<objpD<<endl;
	cout<<"Value of Base class's Protected data : "<<objpoB<<endl;
//	cout<<"Value of derived class : "<<objpB<<endl;
	cout<<"Value of Base Class's Private data is not accessable from the Derived Class"<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
