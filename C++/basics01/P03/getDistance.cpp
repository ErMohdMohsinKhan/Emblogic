#include <iostream>
#include "classes.h"
using namespace std;

int Distance::getDistance()
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<__func__<<": Enter distance in feet/inch "<<endl;
	cin>>feet>>inch;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
