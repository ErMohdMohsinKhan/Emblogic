#include "headers.h"
#include "class.h"

ostream& operator << (ostream& o, const Distance& d)
{
	cout<<__func__<<" : Begin"<<endl;
	o<<d.feet<<"\' "<<d.inches<<"\""<<endl;
	cout<<__func__<<" : End"<<endl;
	return o;
}
