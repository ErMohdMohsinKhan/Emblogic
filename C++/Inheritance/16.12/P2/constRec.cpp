#include"headers.h"
#include"class.h"
Rectangle::Rectangle():Shape(0, 0)
{
	cout<<__func__<<" : Derived class : "<<endl;
	cout<<"Please enter width and height"<<endl;
	cin>>width>>height;
}
