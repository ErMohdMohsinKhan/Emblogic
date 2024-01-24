#include "headers.h"
#include "class.h"

int Array::putel(int n, int elvalue)
{
	if(n<0 || n>= MAX)
		cout<<"Index out of bounds"<<endl;
	else
		arr[n] = elvalue;
	return 0;
}
