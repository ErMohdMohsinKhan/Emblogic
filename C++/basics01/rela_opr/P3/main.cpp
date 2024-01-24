#include "headers.h"
#include "class.h"

int main ()
{
	String s1 = "No";
	String s2 = "Yess";
//	String s3;
//	cout<<"Please enter yes or no"<<endl;
//	s3.getstr(); //to accept string
	if(s1 <= s2)
		cout<<"Objects s1 is less than s2"<<endl;
/*	else if(s2 >= s3)
		cout<<"Objects s2 and s3 are the same"<<endl;
	else if(s1 >= s3)
		cout<<"Objects s1 and s3 are the same"<<endl;
*/	else
		cout<<"No Objects s2 is less than s1"<<endl;
	return 0;
}
