#include "headers.h"
#include "class.h"
void ObjectContainer::add(Obj *obj)
{
	cout<<__func__<<" : Begin"<<endl;
	a1.push_back(obj);
	cout<<__func__<<" : End"<<endl;
}
