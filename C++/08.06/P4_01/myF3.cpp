#include"headers.h"
#include"class.h"
int Test::myFunc(int a, int b, int c)
{
	cout<<__func__<<" : "<<a<<" : "<<b<<" : "<<c<<endl;
	return 0;
}
