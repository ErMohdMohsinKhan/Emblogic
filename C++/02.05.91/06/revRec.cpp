#include "headers.h"
#include "class.h"

string Recursion::revRec(string str, int len, int rem, int i)
{
	if(len == rem)
		return str;
	else 
	{
		char ch = str[i];
		str[i] = str[len];
                str[len] = ch;
		i = i+1;
		len = len-1;
		return revRec(str, len, rem, i);
	}	
}
