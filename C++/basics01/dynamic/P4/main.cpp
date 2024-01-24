#include "headers.h"
#include "class.h"
int main()
{
	String s1;
	String s2 = "Hello World!";
	cout<<__func__<<endl;
	{
		String s3 = "Inside";
	}
	s2.display();
	return 0;
}
