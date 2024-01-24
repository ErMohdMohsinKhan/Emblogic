#include"headers.h"
#include"class.h"
int Dclass::funcDC()
{
        cout<<__func__<<" : Accessing function"<<endl;
//	int p = 10;
//	Bclass::funcBC(p);
	ba = 10;
	cout<<__func__<<" Private : ba "<<ba<<endl;
	return 0;
        
}
