#include"headers.h"
#include"class.h"
int main()
{
	Dclass obj;
	if(obj.funcBC())
		cout<<"Successfully accessed Public member function of Base class from derived class"<<endl;
	return 0;
}
