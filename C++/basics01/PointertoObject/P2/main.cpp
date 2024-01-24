#include"headers.h"
#include"class.h"

int main()
{
	Box b1(5.1, 4.2, 1.2);
	Box b2(3.2, 4.9, 1.0);
	b1.display();
	b2.display();
	if(b1.cmp(b2))
	{
		cout<<"Volume 1 is larger that Volume 2"<<endl;
	}
	else
		cout<<"Volume 2 is larger that Volume 1"<<endl;
	return 0;
}
