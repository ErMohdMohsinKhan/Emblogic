#include "headers.h"
#include "class.h"

istream& operator >> (istream& i, Distance& d)
{
	cout<<__func__<<" : Begin "<<endl;
	cout<<"Enter feet :";
	i>>d.feet;
	cout<<"Enter inches :";
	i>>d.inches;
	cout<<__func__<<" : End"<<endl;
	return i;
}
