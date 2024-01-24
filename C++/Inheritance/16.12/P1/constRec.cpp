#include"headers.h"
#include"class.h"
Rectangle::Rectangle(int a, int b):Shape(a, b)
{
	cout<<__func__<<" : Derived class : "<<endl;
}
