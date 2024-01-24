#include"headers.h"
#include"class.h"

int main()
{
	Box Box1(5.1, 4.2, 1.2);
	Box Box2(3.2, 4.9, 1.0);
	Box *ptrBox;
	ptrBox = &Box1; //Pointer initialize
	cout<<"Volume of Box1 : "<<ptrBox->Volume()<<endl;
	ptrBox = &Box2;
	cout<<"Volume of Box2 : "<<ptrBox->Volume()<<endl;
	return 0;
}
