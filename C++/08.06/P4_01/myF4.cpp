#include"headers.h"
#include"class.h"
int Test::myFunc(int a, int b, int c, int d)
{
	cout<<__func__<<" : "<<a<<" : "<<b<<" : "<<c<<" : "<<d<<endl;
	return 0;
}
