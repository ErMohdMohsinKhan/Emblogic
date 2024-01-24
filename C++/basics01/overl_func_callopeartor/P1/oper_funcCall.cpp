#include "headers.h"
#include "class.h"

Distance Distance::operator()(int ft, float in)
{
	if(inch >= 12)
	{
		feet++;
		inch -= 12;
	}
	return Distance(ft, in);
}
