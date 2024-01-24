#include"headers.h"
#include"class.h"
DerivedClass::DerivedClass(int a, int b, int c):BaseClass(a, b)
{
	cout<<__func__<<" : Three Arg Const"<<endl;
	objpD = c;
}
