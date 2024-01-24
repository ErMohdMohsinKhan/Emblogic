#include"headers.h"
#include"class.h"

Count::Count(const Count &obj)
{
	cout<<"Begin (Copy Const)"<<endl;
	ct += obj.ct;
	cout<<"End (Copy Const)"<<endl;
}
