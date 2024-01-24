#include "headers.h"
#include "classes.h"

Pointer::Pointer(int valA)
{
	cout<<__func__<<": Single argument constructor allocating memory to ptr"<<endl;
	ptr = new int;
	*ptr = valA;
}
