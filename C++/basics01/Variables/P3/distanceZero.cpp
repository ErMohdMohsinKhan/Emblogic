#include "headers.h"
#include "class.h"

Distance::Distance()
{
	cout<<__func__<<" : Begin : Zero argument Constructor"<<endl;
	feet = 0;
	inch = 0.0;
	count++;
	cout<<__func__<<" : End : Zero argument Constructor"<<endl;
}
