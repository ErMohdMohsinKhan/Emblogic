#include<iostream>
using namespace std;
class BaseClass
{
	protected:
		int i;
	public:
		BaseClass(int x)
		{
			cout<<"Base Class Const"<<endl;
			i=x;
		}
		~BaseClass()
		{
			cout<<"Base Class DeConst"<<endl;
		}
};
class DerivedClass:public BaseClass
{
	int j;
	public:
	DerivedClass(int x, int y):BaseClass(y)
	{
		cout<<"Derived Class Const"<<endl;
		j=x;
	}
	~DerivedClass()
	{
		cout<<"Drived Class DeConst"<<endl;
	}
	void show()
	{
		cout<<i<<" "<<j<<endl;
	}
};

int main()
{
	DerivedClass ob(3, 4);
	ob.show();
	return 0;
}
