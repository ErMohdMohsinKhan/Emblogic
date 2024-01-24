#include"headers.h"
#include"class.h"
int Bclass::funcBC(int c)
{
	cout<<__func__<<" : Accessing function"<<endl;
	bb = c;
	cout<<__func__<<" :Accessed protected member of base class  bb: "<<bb<<endl;
	return 0;
}
