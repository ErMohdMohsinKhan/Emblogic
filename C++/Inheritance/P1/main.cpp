#include "headers.h"
#include "class.h"
int main()
{
	//BaseClass bcObj;
	//DerivedClass();
	DerivedClass dcObj(100,200,300);
	cout<<__func__<<" : Begin"<<endl;
	dcObj.display();
	cout<<__func__<<" : End"<<endl;
	return 0;
}
