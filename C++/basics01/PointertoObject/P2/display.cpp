#include"headers.h"
#include"class.h"

void Box::display()
{
	cout<<__func__<<"Begin"<<endl;
	cout<<"Length : "<<length;
	cout<<"  Breadth : "<<breadth;
	cout<<"  Height : "<<height<<endl;
	cout<<__func__<<"End"<<endl;
}
