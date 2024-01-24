#include "headers.h"
#include "class.h"

void Distance::getDistance()
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<"Enter value for feet"<<endl;
	cin>>feet;
	cout<<"Enter value for inch"<<endl;
	cin>>inch;
	cout<<__func__<<" : End"<<endl;
}
