#include "headers.h"
#include "class.h"

int main (void)
{
	cout<<__func__<<" : Begin"<<endl;
	Circle c1;
	Circle c2(8.5);
	c1.ara();
	c1.display();
	c2.ara();
	c2.display();
	cout<<__func__<<" : End"<<endl;
}
