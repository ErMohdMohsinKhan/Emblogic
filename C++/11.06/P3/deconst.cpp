#include "headers.h"
#include "class.h"
Array::~Array()
{
	delete [] data;
}
