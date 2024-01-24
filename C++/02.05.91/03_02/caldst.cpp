#include "headers.h"
#include "class.h"

float Distance::caldst(Distance ds)
{
	cout<<__func__<<": Begin"<<endl;
	Distance dl;
	cout<<x<<y<<endl;
	cout<<ds.x<<ds.y<<endl;
	dl.x = (x-ds.x)*(x-ds.x);
	dl.y = (y-ds.y)*(y-ds.y);
	dl.x = dl.x + dl.y;
	dl.x = sqrt(dl.x);
	cout<<__func__<<": End"<<endl;
	return dl.x;
}
