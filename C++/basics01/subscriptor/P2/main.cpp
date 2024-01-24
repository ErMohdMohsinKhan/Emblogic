#include "headers.h"
#include "class.h"

int main()
{
	Array arr;
	int i;
	int tmp;
	for(i=0; i<MAX; i++)
		arr[i] = i*10;
	for(i=0; i<MAX; i++)
	{
		tmp = arr[i];
		cout<<"Element "<<i<<" : "<<tmp<<endl;
	}
	return 0;
}
