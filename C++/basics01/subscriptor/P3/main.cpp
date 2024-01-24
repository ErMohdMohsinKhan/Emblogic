#include "headers.h"
#include "class.h"

int main()
{
	Array arr;
	int i;
	int tmp = 0;
	int avg=0;
	for(i=0; i<MAX; i++)
		arr[i] = i*10;
	for(i=0; i<MAX; i++)
	{
		tmp = arr[i];
		cout<<"Element "<<i<<" : "<<tmp<<endl;
		avg = avg + arr[i];
	}
	cout<<"Mean : "<<avg/MAX<<endl;
	return 0;
}
