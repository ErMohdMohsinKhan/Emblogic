#include "headers.h"
#include "class.h"

int main()
{
	Counter c1, c2;
	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c2.get_count()<<endl;
	++c1;
	c2 = ++c1;
	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c2.get_count()<<endl;
	return 0;
}
