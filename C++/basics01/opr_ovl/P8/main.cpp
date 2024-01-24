#include "headers.h"
#include "class.h"

int main ()
{
	cout<<__func__<<" : Begin"<<endl;
	Mult n1;
	Mult n2(5);
	Mult n3(6);
	Mult nr(n1);
	cout<<"n1 : ";
	n1.show();
	cout<<"n2 : ";
	n2.show();
	cout<<"nr : ";
	nr.show();
	nr = n1 + n2 * n3;
	cout<<"nr : ";nr.show();
	cout<<__func__<<" : End"<<endl;
	return 0;
}
