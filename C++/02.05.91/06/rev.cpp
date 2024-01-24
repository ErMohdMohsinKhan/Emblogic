#include "headers.h"
#include "class.h"

void Recursion::reverse()
{
	int len;
	len = str.length();
	len = len-1;
	int rem;
	char ch;
	rem = len/2;
	int i = 0;
	str = revRec(str, len, rem, i);
	cout<<str<<endl;
}
