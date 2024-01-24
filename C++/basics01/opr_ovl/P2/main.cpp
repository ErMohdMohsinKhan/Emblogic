#include "headers.h"
#include "class.h"

int main()
{
	Counter c1, c2;
	Counter c3 = c2;
	Counter c4 = ++c1;
	Counter c5 = ++c1;
	cout<<endl;
	++c1;
	++c2;
	cout<<"C1 : "<<c1.get_count()<<endl;
	cout<<"C2 : "<<c2.get_count()<<endl;
	cout<<endl;
	cout<<"C3 : "<<c3.get_count()<<endl;
	cout<<"C4 : "<<c4.get_count()<<endl;
	cout<<"C5 : "<<c5.get_count()<<endl;
	return 0;
}
