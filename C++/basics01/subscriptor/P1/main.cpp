#include "headers.h"
#include "class.h"

int main()
{
	Array arr;
	int j;
	for(j=0; j<MAX+5; j++)
	{
		arr.putel(j, j*10);
	}
	for(j=0; j<MAX+2; j++)
	{
		int temp = arr.getel(j);
		arr.putel(j, j*10);
		cout<<"Element "<<j<<" is "<<temp<<endl;
	}
	return 0;
}
