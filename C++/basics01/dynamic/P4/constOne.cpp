#include "headers.h"
#include "class.h"
String::String(char *arg)
{
	cout<<"One Arg Const"<<endl;
	int len;
	len = strlen(arg);
	str = new char[len+1];
	strcpy(str, arg);
}
