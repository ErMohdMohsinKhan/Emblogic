#include "headers.h"
#include "class.h"
Array::Array()
{
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	data = new int[size];
}
