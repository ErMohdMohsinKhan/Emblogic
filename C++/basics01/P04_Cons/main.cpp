#include "headers.h"
#include "classes.h"

int main ()
{
	Data n1, n2, sum;
	cout<<__func__<<" : Begin"<<endl;
	n1.display();
	n2.display();
	sum.display();
	n1.getValue();
	n2.getValue();
	sum.add(n1, n2);
	sum.res_ds(n1, n2);
	cout<<__func__<<" : End"<<endl;
	return 0;
}
