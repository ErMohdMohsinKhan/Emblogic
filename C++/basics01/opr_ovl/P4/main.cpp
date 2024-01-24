#include "headers.h"
#include "class.h"

int main()
{
	Distance D1(11, 10.1), D2(5, 0.5), D3;
	cout<<"D1 : "<<D1.displayDistance();
	cout<<"D2 : "<<D2.displayDistance();
	cout<<"Decrementing D1"<<endl;
	--D1;
	cout<<"D1 : "<<D1.displayDistance();
	D3 = --D2;
	cout<<"D2 : "<<D2.displayDistance()<<endl;
	cout<<"D3 : "<<D3.displayDistance()<<endl;
	return 0;
}
