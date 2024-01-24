#include "headers.h"
#include "class.h"
int main()
{
	Recursion str;
	cout<<__func__<<"Begin"<<endl;
	str.getString();
	cout<<endl;
	str.reverse();
	cout<<__func__<<"End"<<endl;
	return 0;
}
