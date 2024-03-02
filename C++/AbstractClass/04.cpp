#include <iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"In Base Class"<<endl;
		}
};
class Derv1:public Base
{
	public:
		void show()
		{
			cout<<"In Derived Class 1"<<endl;
		}
};
class Derv2:public Derv1 
{
	public:
		void show()
		{
			cout<<"In Derived Class 2"<<endl;
		}
};

int main()
{
	Derv1 *dp;	//Base* bptr;
	Derv1 d1;
	Derv2 d2;
	dp = &d1;  
	dp->show();  //show() is called of Derived class, depending upon the data type of *bptr
	dp = &d2;
	dp->show();
	/*Base bp;
	bptr = &bp;
	bptr->show();*/
	return 0;
}
