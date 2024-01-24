#include "headers.h"
#include "class.h"
Array::Array(int s)
{
	size = s;
	data = new int[size];
}
