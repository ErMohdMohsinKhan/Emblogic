#include "headers.h"
#include "classes.h"
int Message::print()
{
	cout<<__func__<<" : "<<endl;
	cout<<arg<<endl;
	return 0;
}
