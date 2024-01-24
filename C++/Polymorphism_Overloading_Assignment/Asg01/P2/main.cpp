#include "headers.h"
#include "class.h"

int main ()
{
	Rectangle c1(5, 2);
	Rectangle c2(c1);
	Rectangle cr;
	cout<<"c1 ";
	c1.display();
	cout<<endl;
	cout<<"c2 ";
	c2.display();
	cout<<endl;
	cout<<"cr ";
	cr.display();
	cout<<endl;

	cr = c1+c2;
	cout<<"cr->Resultant :";
        cr.display();
        cout<<endl;
	return 0;
}
