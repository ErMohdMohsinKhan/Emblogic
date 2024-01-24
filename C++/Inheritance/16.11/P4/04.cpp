#include<iostream>
using namespace std;
class A
{
	public:
		A(int n)
		{
			cout<<"Base class"<<endl;
			cout<<n<<endl;
		}
};
class B:public A
{
	public:
		B(int n, double d): A(n)
	{
		cout<<"I derived class"<<endl;
		cout<<d<<endl;
	}
};
class C:public B
{
	public:
		C(int n, double d, char ch):B(n,d)
	{
		cout<<"II derived class"<<endl;
		cout<<ch<<endl;
	}
};

int main()
{
	C c(5, 4.3, 'R');
	return 0;
}
