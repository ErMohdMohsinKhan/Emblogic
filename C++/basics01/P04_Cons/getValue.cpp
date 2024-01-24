#include "headers.h"
#include "classes.h"

void Data::getValue ()
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<"Enter value : "<<endl;
        cin>>no;
	cout<<__func__<<" : End"<<endl;
}
