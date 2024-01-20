#include "headers.h"
#include "classes.h"
#include "declarations.h"
int main()
{
	Library oLib;
	cout<<__func__<<" : Begin"<<endl;
	while(1)
		oLib.mainMenu();
	cout<<__func__<<" : End"<<endl;
	return 0;
}
