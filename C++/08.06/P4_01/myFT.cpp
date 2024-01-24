#include"headers.h"
#include"class.h"
int Test::myFunc(int a, int b)
{
	cout<<__func__<<" : "<<a<<" : "<<b<<endl;
	return 0;
}
