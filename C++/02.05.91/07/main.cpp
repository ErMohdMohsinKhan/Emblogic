#include "headers.h"
#include "class.h"

int main(void)
{
	cout<<__func__<<": Begin"<<endl;
	Deviation d1;
	d1.getValues();
	cout<<__func__<<": End"<<endl;
	return 0;
}
