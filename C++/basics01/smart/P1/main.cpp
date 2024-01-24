#include "headers.h"
#include "class.h"
int Obj::i = 10;
int Obj::j = 10;
int main()
{
	const int size = 10;
	Obj o[size];
	ObjectContainer oc;
	for(int i=0; i<size; i++)
	{
		oc.add(&o[i]);
	}
	SmartPointer sp(oc);
	do
	{
		sp->a();
		sp->b();
	}
	return 0;
}
