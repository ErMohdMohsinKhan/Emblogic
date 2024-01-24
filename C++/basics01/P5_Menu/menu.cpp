#include "headers.h"
#include "classes.h"

int Data::menu ()
{
	int choice;
	cout<<__func__<<" : Begin"<<endl;
	cout<<"<<MENU>> "<<endl;
        cout<<" 1 : Addition"<<endl;
        cout<<" 2 : Subtraction"<<endl;
	cout<<" 3 : Multiplicaion"<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>choice;
	cout<<__func__<<" : End"<<endl;
	return choice;
}
