#include <iostream>
using namespace std;
class A
{
	protected:
	int meter;
	float cmeter;
	public:
	A()
	{
		meter = 5;
		cmeter = 3.15;
	}
};
class B:public A
{
	public:
		virtual void show()
		{
			cout<<"Meter : "<<meter<<"Cent-meter :"<<cmeter<<endl;
		}
};
class C:public A
{
	public:
		virtual void show()
		{
			cout<<"Meter : "<<meter<<"Cent-meter :"<<cmeter<<endl;
		}
};
class D:public B, public C
{
	public:
	void show()
	{
		cout<<"Meter : "<<meter<<"Cent-meter :"<<cmeter<<endl;
	//	cout<<"Meter : "<<C::meter<<"Cent-meter :"<<C::cmeter<<endl;
	}
};

int main ()
{
	D objD;
	objD.show();
	return 0;
}
