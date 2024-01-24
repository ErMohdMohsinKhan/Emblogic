#include "headers.h"
#include "class.h"

Distance::Distance(float dsa, float dsb)
{
	cout<<__func__<<": Begin Two argument constructor"<<endl;
	x = dsa;
	y = dsb;
	cout<<__func__<<": End Two argument constructor"<<endl;
}
