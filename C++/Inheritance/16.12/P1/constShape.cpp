#include"headers.h"
#include"class.h"
Shape::Shape(int a, int b)
{
	cout<<__func__<<" : Base class : "<<endl;
	width = a;
	height = b;
	cout<<"Width :" <<width<<" : Height " <<height<<endl;
}
