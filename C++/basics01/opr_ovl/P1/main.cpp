#include "headers.h"
#include "class.h"

int main()
{
	int i;
	Counter c1, c2;
	cout<<__func__<<" : Begin"<<endl;
	i=2;
	cout<<"i = "<<i<<endl;
	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c1.get_count()<<endl;
	++i;
	++c1;
	++c2;
	cout<<"i = "<<i<<endl;
        cout<<"c1 = "<<c1.get_count()<<endl;
        cout<<"c2 = "<<c1.get_count()<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
