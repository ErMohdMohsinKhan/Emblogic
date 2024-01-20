#include"headers.h"
#include"declarations.h"
#include"classes.h"
Library::Library()
{
//	cout<<__func__<<" : Begin (Zero Arg Const)"<<endl;
	libName = new char[SIZE];
	if(!libName)
	{
		cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
	}
	memset(libName, '\0', SIZE);
	strcpy(libName, "M A Library");
//	cout<<__func__<<" : End (Zero Arg Const)"<<endl;
}
