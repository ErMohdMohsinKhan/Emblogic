#include "headers.h"
#include "class.h"

void Recursion::getString()
{
	cout<<__func__<<"Begin"<<endl;
	cout<<"Enter the String : "<<endl;
	getline(cin, str);
	cout<<__func__<<"End"<<endl;
}
