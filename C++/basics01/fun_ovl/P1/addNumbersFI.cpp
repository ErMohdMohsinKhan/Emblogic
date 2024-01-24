#include "headers.h"
#include "class.h"

float Addition::addNumbers(float a1, int b1)
{
	cout<<__func__<<": Begin"<<endl;
	sum = a1 + b1;
	cout<<__func__<<": End"<<endl;
	return sum;
}
