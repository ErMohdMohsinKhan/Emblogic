#include "headers.h"
#include "class.h"
int Test::myFunc(int a, int)
{
	cout<<__func__<<" : "<<a<<endl;
	return a;
}
