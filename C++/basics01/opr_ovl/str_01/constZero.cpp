#include "headers.h"
#include "class.h"

String::String()
{
	cout<<__func__<<" : Zero Arg"<<endl;
	strcpy(str, "\0");
}
