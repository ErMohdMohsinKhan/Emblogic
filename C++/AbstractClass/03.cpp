#include <iostream>
using namespace std;
class Base
{
	public:
		virtual void show() = 0;
};
class Derv1:public Base
{
	public:
		void show()
		{
			cout<<"In Derived Class 1"<<endl;
		}
};
class Derv2:public Base
{
	public:
		void show()
		{
			cout<<"In Derived Class 2"<<endl;
		}
};

int main()
{
	Base* bptr;
	Derv1 d1;
	Derv2 d2;
	bptr = &d1;  
	bptr->show();  //show() is called of Derived class, depending upon the data type of *bptr
	bptr = &d2;
	bptr->show();
	Base bp;
	bptr = &bp;
	bptr->show();
	return 0;
}
