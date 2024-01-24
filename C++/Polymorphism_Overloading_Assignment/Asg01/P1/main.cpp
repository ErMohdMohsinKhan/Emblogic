#include "headers.h"
#include "class.h"

int main ()
{
	Circle c1(2);
	Circle c2(c1);
	Circle cr;
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
