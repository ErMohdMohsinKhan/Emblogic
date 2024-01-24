#include "headers.h"
#include "class.h"

int Array::getel(int n) const
{
	if(n<0 || n>= MAX)
		cout<<"Index out of bounds";
	else
		return arr[n];
	return -1;
}
