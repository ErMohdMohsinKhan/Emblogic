#include "headers.h"
#include "class.h"

int main()
{
	Counter c1, c2;
	Counter c3 = c2;
	Counter c4 = ++c1;
	Counter c5 = ++c1;
	cout<<endl;
	++c1;
	++c2;
}
