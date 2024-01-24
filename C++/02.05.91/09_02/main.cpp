#include"headers.h"
#include"class.h"

int Count::ct=0; //declare
int main(void)
{
	Count c1;
	cout<<"C1 : "<<c1.getCount()<<endl;
	Count c2(10);
	cout<<"C2 : "<<c2.getCount()<<endl;
	Count c3(c2);
	cout<<"C3 : "<<c3.getCount()<<endl;
	cout << "Count : " << Count::ct << endl;
	return 0;
}
