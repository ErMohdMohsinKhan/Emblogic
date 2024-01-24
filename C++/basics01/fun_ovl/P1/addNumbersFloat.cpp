#include "headers.h"
#include "class.h"

float Addition::addNumbers(float a1, float b1)
{
	cout<<__func__<<": Begin"<<endl;
	sum = a1 + b1;
	cout<<__func__<<": End"<<endl;
	return sum;
}
