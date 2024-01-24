#include"headers.h"
#include"class.h"
int Bclass::funcBC(int c)
{
	cout<<__func__<<" : Accessing function"<<endl;
	ba = c;
	cout<<__func__<<" : ba : "<<ba<<endl;
	return 0;
}
