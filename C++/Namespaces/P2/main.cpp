#include<iostream>
#include "myNamespace.h"
using namespace std;
using namespace circle;
int main()
{
	int rad = 5;
	cout<<"Cicumference of Circle with radius "<<rad<<" : "<<circumf(rad)<<endl;
	cout<<"Area of Circle with radius "<<rad<<" : "<<area(rad)<<endl;
	return 0;
}
