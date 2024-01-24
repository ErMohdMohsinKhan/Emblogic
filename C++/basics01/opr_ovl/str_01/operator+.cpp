#include "headers.h"
#include "class.h"

String String::operator+(const String ss) const
{
	String temp;
	if(strlen(str) + strlen(ss.str) < SZ)
	{
		strcpy(temp.str, str);
		strcat(temp.str, ss.str);
	}
	else
	{
		cout<<"\nString overflow"<<endl;
		exit(EXIT_FAILURE);
	}
	return temp;
}
