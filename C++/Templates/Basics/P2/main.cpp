#include "headers.h"
#include "class.h"
//template <class T>
int main ()
{
	//int c1, c2;
	//cout<<"Enter two values "<<endl;
	//cin >> c1 >> c2;
	Arth <int> r(10, 5);
	cout<< "Add : "<<r.add()<<endl;
	cout<< "Sub : "<<r.sub()<<endl;
	return 0;
}
