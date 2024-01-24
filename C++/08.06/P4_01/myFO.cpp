#include"headers.h"
#include"class.h"
int Test::myFunc(int a)
{
	cout<<__func__<<" : "<<a<<endl;
	return 0;
}
