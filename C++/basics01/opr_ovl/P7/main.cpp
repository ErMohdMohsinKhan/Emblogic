#include "headers.h"
#include "class.h"

int main ()
{
	cout<<__func__<<" : Begin"<<endl;
	Sub n1;
	Sub n2(5);
	Sub nr(n1);
	cout<<"n1 : ";
	n1.show();
	cout<<"n2 : ";
	n2.show();
	cout<<"nr : ";
	nr.show();
	nr = n1 - n2;
	cout<<"nr : ";nr.show();
	cout<<__func__<<" : End"<<endl;
	return 0;
}
