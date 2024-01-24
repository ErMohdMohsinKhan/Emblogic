#include "headers.h"
#include "class.h"

int main ()
{
	String s1 = "Virat The";
	String s2 = "Run Machine Kohli";
	String s3;
	cout<<__func__<<" : Begin"<<endl;
	s1.display();
	cout<<endl;
	s2.display();
	cout<<endl;
	s3.display();
	cout<<endl;
	s3 = s1+s2;
	s3.display();
	cout<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
