#include "headers.h"
#include "class.h"

int main()
{
	Time t1;
	t1.getdata();
	cout<<"Time entered : ";
	t1.display();
	cout<<endl;
	Time t2, t3;
	t2.getdata();
	cout<<"Time entered : ";
	t2.display();
	cout<<endl;
	cout<<"Time entered : ";
	t3.display();
	cout<<endl;
	t3 = t1.addTime(t2);
	t3.display();
	cout<<endl;
	return 0;
}
