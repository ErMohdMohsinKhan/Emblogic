#include "headers.h"
#include "class.h"

int main ()
{
	leverage l1; //defines an object of leverage class
	int c;
	cout<<__func__<<" : Begin"<<endl;
	l1.pry(); //This 
	c = l1.getcrow();
	cout<<"Crowbar : "<<c<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
