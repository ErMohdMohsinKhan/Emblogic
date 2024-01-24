#include "headers.h"
#include "class.h"

int main()
{
	int a, b;
	float c, d;
	Addition obj; 
	cout<<__func__<<" : Begin"<<endl;
	cout<<__func__<<" : Enter two Integer numbers"<<endl;
	cin>>a>>b;
	cout<<__func__<<" : Result : "<<obj.addNumbers(a, b)<<endl;
	cout<<__func__<<" : Enter two Float numbers"<<endl;
	cin>>c>>d;
	cout<<__func__<<" : Result : "<<obj.addNumbers(c, d)<<endl;
	cout<<__func__<<" : Enter First integer then Float number"<<endl;
	cin>>a>>c;
	cout<<__func__<<" : Result : "<<obj.addNumbers(a, c)<<endl;
	cout<<__func__<<" : Enter First Float and then Integer number"<<endl;
	cin>>c>>a;
	cout<<__func__<<" : Result : "<<obj.addNumbers(c, a)<<endl;
	cout<<__func__<<" : End"<<endl;
}
