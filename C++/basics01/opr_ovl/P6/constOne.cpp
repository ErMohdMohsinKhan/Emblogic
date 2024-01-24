#include "headers.h"
#include "class.h"

Distance::Distance(float d)
{
	cout<<"One arg Const"<<endl;
	feet = d/12;
	inch = d - (feet*12);
}
