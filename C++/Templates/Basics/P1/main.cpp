#include "headers.h"
#include "class.h"

int main ()
{
	int c1, c2;
	cout<<"Enter two values "<<endl;
	cin >> c1 >> c2;
	Arth r(c1, c2);
	cout<< "Add : "<<r.add()<<endl;
	cout<< "Sub : "<<r.sub()<<endl;
	return 0;
}
