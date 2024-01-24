#include "headers.h"
#include "class.h"
int main()
{
	int size;
	cout<<"Please enter the size of array"<<endl;
	cin>>size;
	Array *a1();
	//a1 = new Array[size];
	for(int i=0; i<size; i++)
	{
		a1->getValue(i+5);
		a1->display();
	}
	return 0;
}
