#include "headers.h"
#include "class.h"

Deviation::Deviation()
{
	cout<<"Begin (Zero Arg Constructor)"<<endl;
	ptr = new int[5];
	if(!ptr)
	{
		cout<<"Error->Memory"<<endl;
	}
	cout<<"Memory allocated to array"<<endl;
	mean=x2=0.0;

	cout<<"End (Zero Arg Constructor)"<<endl;
}
