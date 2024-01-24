#include"headers.h"
using namespace std;

class A //base class
{
	private:
		int privdataA;
	protected:
		int protdataA;
	public:
		int pubFunA();
};

class B:public A //publicly-derived class
{
	public:
		void pubFunB()
		{
			int a;
			//a=privdataA; //error: not accessible
			a=protdataA; //ok
			A::pubFunA(); //ok
		}
};

class C:private A //privately-derived class
{
	private:
		int a;
		int priFunC();
	public:
		void pubFunC()
		{
			cout<<"This is pubFuncC"<<endl;
			//a=privdataA; //error: not accessible
			a=protdataA; //ok
			//a=pubFunA();

		}
};

int C::priFunC()
{
int val;
cout<<"This is priFuncC"<<endl;
val=pubFunA();
return 0;
}

int A::pubFunA()
{
cout<<"This is pubFuncA"<<endl;
//cout<<"prodataA:"<<prodataA<<endl;
cout<<"privdataA:"<<privdataA<<endl;
return 0;
}
