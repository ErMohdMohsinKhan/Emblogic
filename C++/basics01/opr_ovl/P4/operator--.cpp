#include "headers.h"
#include "class.h"

Distance Distance::operator --()
{
	inches -= 1;
	if(inches < 0)
	{
		feet--;
		inches = inches + 12;
	}
	return Distance(feet, inches);
}
