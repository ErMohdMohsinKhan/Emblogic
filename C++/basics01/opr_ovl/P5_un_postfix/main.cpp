#include "headers.h"
#include "class.h"

int main()
{
	Counter c1, c2;
	cout<<"c1 = "<<c1.getCount()<<endl;
	cout<<"c2 = "<<c2.getCount()<<endl;
	++c1;
	cout<<"c1 = "<<c1.getCount()<<endl;
	c2 = ++c1;
	cout<<"c1 = "<<c1.getCount()<<endl;
	cout<<"c2 = "<<c2.getCount()<<endl;
	c2 = c1++;
	cout<<"c1 = "<<c1.getCount()<<endl;
	cout<<"c2 = "<<c2.getCount()<<endl;
	return 0;
}
