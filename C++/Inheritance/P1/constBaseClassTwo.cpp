#include"headers.h"
#include"class.h"
BaseClass::BaseClass(int a, int b)
{
	cout<<__func__<<" : Two Arg Constructor"<<endl;
	objpB = a;
	objpoB = b;
}
